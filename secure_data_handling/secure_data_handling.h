#ifndef SECURE_DATA_HANDLING_H
#define SECURE_DATA_HANDLING_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct session_s - Session data structure
 * @id: Unique session identifier
 * @data: Session data (string)
 * @next: Next session in the store
 */
typedef struct session_s
{
	char *id;
	char *data;
	struct session_s *next;
} session_t;

/**
 * struct store_s - Session store data structure
 * @sessions: Linked list of sessions
 */
typedef struct store_s
{
	session_t *sessions;
} store_t;

/* Session functions */
session_t *session_create(const char *id, const char *data);
void session_destroy(session_t *session);

/* Store functions */
store_t *store_create(void);
void store_destroy(store_t *store);
int store_insert(store_t *store, session_t *session);
session_t *store_get(store_t *store, const char *id);
int store_delete(store_t *store, const char *id);
void store_clear(store_t *store);

#endif /* SECURE_DATA_HANDLING_H */
