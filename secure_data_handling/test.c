#include "secure_data_handling.h"

/**
 * main - test the secure data handling
 *
 * Return: Always 0
 */
int main(void)
{
	store_t *store;
	session_t *session1, *session2, *retrieved;

	/* Create store */
	store = store_create();
	if (store == NULL)
		return (1);

	/* Create sessions */
	session1 = session_create("session1", "data1");
	session2 = session_create("session2", "data2");

	if (session1 == NULL || session2 == NULL)
		return (1);

	/* Insert sessions */
	if (store_insert(store, session1) == 0)
		return (1);
	if (store_insert(store, session2) == 0)
		return (1);

	/* Try duplicate insert */
	if (store_insert(store, session_create("session1", "newdata")) == 1)
		return (1); /* Should fail */

	/* Retrieve sessions */
	retrieved = store_get(store, "session1");
	if (retrieved == NULL || strcmp(retrieved->data, "data1") != 0)
		return (1);

	retrieved = store_get(store, "nonexistent");
	if (retrieved != NULL)
		return (1);

	/* Delete session */
	if (store_delete(store, "session1") == 0)
		return (1);

	retrieved = store_get(store, "session1");
	if (retrieved != NULL)
		return (1);

	/* Clear store */
	store_clear(store);

	retrieved = store_get(store, "session2");
	if (retrieved != NULL)
		return (1);

	/* Destroy store */
	store_destroy(store);

	return (0);
}
