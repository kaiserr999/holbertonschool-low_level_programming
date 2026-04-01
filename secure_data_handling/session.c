#include "session.h"
#include <string.h>

/**
 * session_create - creates a new session
 * @id: session identifier
 * @data: session data
 *
 * Return: pointer to new session, or NULL on failure
 */
session_t *session_create(const char *id, const char *data)
{
	session_t *session;

	if (id == NULL || data == NULL)
		return (NULL);

	session = malloc(sizeof(session_t));
	if (session == NULL)
		return (NULL);

	session->id = strdup(id);
	if (session->id == NULL)
	{
		free(session);
		return (NULL);
	}

	session->data = strdup(data);
	if (session->data == NULL)
	{
		free(session->id);
		free(session);
		return (NULL);
	}

	session->next = NULL;
	return (session);
}

/**
 * session_destroy - destroys a session
 * @session: session to destroy
 */
void session_destroy(session_t *session)
{
	if (session == NULL)
		return;

	free(session->id);
	free(session->data);
	free(session);
}
