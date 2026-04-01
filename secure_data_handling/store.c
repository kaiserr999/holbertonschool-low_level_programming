#include "store.h"
#include <stdlib.h>
#include <string.h>

/* Global session list */
static session_t *global_sessions = NULL;

/**
 * store_create - creates a new session store
 *
 * Return: pointer to new store, or NULL on failure
 */
store_t *store_create(void)
{
	store_t *store;

	store = malloc(sizeof(store_t));
	if (store == NULL)
		return (NULL);

	return (store);
}

/**
 * store_destroy - destroys a session store
 * @store: store to destroy
 */
void store_destroy(store_t *store)
{
	if (store == NULL)
		return;

	store_clear(store);
	free(store);
}

/**
 * store_insert - inserts a session into the store
 * @store: session store
 * @session: session to insert
 *
 * Return: 1 on success, 0 on failure
 */
int store_insert(store_t *store, session_t *session)
{
	session_t *current;

	if (store == NULL || session == NULL)
		return (0);

	/* Check if session with same id already exists */
	current = global_sessions;
	while (current != NULL)
	{
		if (strcmp(current->id, session->id) == 0)
			return (0); /* Duplicate id */
		current = current->next;
	}

	/* Insert at beginning */
	session->next = global_sessions;
	global_sessions = session;
	return (1);
}

/**
 * store_get - retrieves a session from the store
 * @store: session store
 * @id: session id to find
 *
 * Return: pointer to session, or NULL if not found
 */
session_t *store_get(store_t *store, const char *id)
{
	session_t *current;

	if (store == NULL || id == NULL)
		return (NULL);

	current = global_sessions;
	while (current != NULL)
	{
		if (strcmp(current->id, id) == 0)
			return (current);
		current = current->next;
	}

	return (NULL);
}

/**
 * store_delete - deletes a session from the store
 * @store: session store
 * @id: session id to delete
 * @out: pointer to store the deleted session
 *
 * Return: 1 if deleted, 0 if not found
 */
int store_delete(store_t *store, const char *id, session_t **out)
{
	session_t *current, *prev;

	if (store == NULL || id == NULL)
		return (0);

	current = global_sessions;
	prev = NULL;

	while (current != NULL)
	{
		if (strcmp(current->id, id) == 0)
		{
			if (prev == NULL)
				global_sessions = current->next;
			else
				prev->next = current->next;

			if (out != NULL)
				*out = current;
			else
				session_destroy(current);
			return (1);
		}
		prev = current;
		current = current->next;
	}

	return (0);
}

/**
 * store_clear - clears all sessions from the store
 * @store: session store
 */
void store_clear(store_t *store)
{
	session_t *current, *next;

	if (store == NULL)
		return;

	current = global_sessions;
	while (current != NULL)
	{
		next = current->next;
		session_destroy(current);
		current = next;
	}

	global_sessions = NULL;
}
