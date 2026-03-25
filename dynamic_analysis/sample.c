#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * sample.c for VS Code dynamic analysis task
 * This file defines compute_target() and validate() so values can be
 * deterministically computed for the input 123456.
 */

unsigned int compute_target(unsigned int k)
{
    /* simple deterministic transform */
    return (unsigned int)(k * 2654435761u) ^ 0xBEEFDEADu;
}

int validate(unsigned int k, unsigned int *tgt_pre, unsigned int *tgt_post,
             unsigned short *mask, unsigned short *sig)
{
    unsigned int tgt = compute_target(k);
    if (tgt_pre)
        *tgt_pre = tgt;

    /* branch that conditionally flips bits */
    if (tgt & 1u)
        tgt ^= 0x12345678u;
    else
        tgt ^= 0x87654321u;

    if (tgt_post)
        *tgt_post = tgt;

    if (mask)
        *mask = (unsigned short)((tgt >> 16) & 0xFFFFu);
    if (sig)
        *sig = (unsigned short)(tgt & 0xFFFFu);

    return 1;
}

int main(void)
{
    char pinbuf[64];
    unsigned int k;

    if (fgets(pinbuf, sizeof(pinbuf), stdin) == NULL)
        return 1;

    pinbuf[strcspn(pinbuf, "\n")] = '\0';
    k = (unsigned int)atoi(pinbuf);

    /* call validate but do not print (debugger is expected to inspect) */
    unsigned int tgt_pre = 0, tgt_post = 0;
    unsigned short mask = 0, sig = 0;
    validate(k, &tgt_pre, &tgt_post, &mask, &sig);

    (void)tgt_pre; (void)tgt_post; (void)mask; (void)sig;
    return 0;
}
 
