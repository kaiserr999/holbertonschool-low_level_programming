# Hash Tables

This directory contains an implementation of hash tables in C, focusing on the fundamental data structure and its operations.

## Data Structures

### `hash_node_t`
- **key**: String key for the hash table entry
- **value**: String value associated with the key
- **next**: Pointer to the next node in the collision chain

### `hash_table_t`
- **size**: Size of the hash table array
- **array**: Array of pointers to `hash_node_t` (collision chains)

## Functions

### `hash_table_create`
- **Prototype**: `hash_table_t *hash_table_create(unsigned long int size)`
- **Description**: Creates a new hash table with the specified size
- **Parameters**:
  - `size`: The number of slots in the hash table array
- **Return**: Pointer to the newly created hash table, or `NULL` on failure
- **Memory**: Allocates memory for the hash table structure and the array of pointers

## Collision Handling

This implementation uses **separate chaining** for collision resolution. Each slot in the hash table array contains a linked list of nodes that hash to the same index.

## Usage Example

```c
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    if (ht == NULL)
        return (1);

    /* Use the hash table here */

    return (0);
}
```

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c hash_table_create.c -o program
```

## Memory Management

- The `hash_table_create` function allocates memory that must be freed when the hash table is no longer needed
- Future functions will handle individual key-value pair memory management

## Future Implementations

This directory will be expanded with additional hash table operations:
- Hash function (djb2 algorithm)
- Set/add key-value pairs
- Get values by key
- Delete key-value pairs
- Print hash table contents
- Delete entire hash table