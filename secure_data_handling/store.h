#ifndef STORE_H
#define STORE_H

#include "session.h"

/**
 * struct store_s - Session store data structure
 * @sessions: Linked list of sessions
 */
typedef struct store_s
{
	session_t *sessions;
} store_t;

/* Store functions */
store_t *store_create(void);
void store_destroy(store_t *store);
int store_insert(store_t *store, session_t *session);
session_t *store_get(store_t *store, const char *id);
int store_delete(store_t *store, const char *id);
void store_clear(store_t *store);

#endif /* STORE_H */