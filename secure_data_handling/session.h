#ifndef SESSION_H
#define SESSION_H

#include <stdlib.h>
#include <string.h>

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

/* Session functions */
session_t *session_create(const char *id, const char *data);
void session_destroy(session_t *session);

#endif /* SESSION_H */