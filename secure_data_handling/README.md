# Secure Data Handling

A C implementation of a secure session and data storage management system. This project provides functionality for creating, retrieving, and safely managing sessions with associated user data.

## Project Overview

This module demonstrates secure data handling patterns in C, including:
- Session management with unique identifiers
- User data storage with proper memory management
- Session store operations (add, retrieve, delete, clear)
- Secure memory cleanup and deallocation

## Files

| File | Purpose |
|------|---------|
| `session.h` | Session structure and function declarations |
| `session.c` | Session implementation (create, destroy, set_data) |
| `store.h` | Store structure and function declarations |
| `store.c` | Store implementation (add, get, delete, destroy) |
| `secure_data_handling.h` | Combined header for all functionality |
| `main.c` | Command-driven interface for testing |
| `test.c` | Test cases for the module |
| `Makefile.txt` | Build configuration |

## Data Structures

### Session (`session_t`)
```c
typedef struct session_s {
    char *id;              /* Session identifier */
    unsigned int uid;      /* User ID */
    unsigned char *data;   /* Session data buffer */
    size_t data_len;       /* Length of data */
} session_t;
```

### Store (`store_t`)
```c
typedef struct store_s {
    node_t *head;  /* Head of linked list of sessions */
} store_t;
```

## API Reference

### Session Functions

#### `session_t *session_create(const char *id, unsigned int uid, const unsigned char *data, size_t data_len)`
Creates a new session with the given ID, user ID, and data.
- **Parameters:** Session identifier, user ID, data buffer, data length
- **Returns:** Pointer to new session, NULL on error

#### `void session_destroy(session_t *s)`
Safely deallocates a session and all associated memory.

#### `int session_set_data(session_t *s, const unsigned char *data, size_t data_len)`
Updates the session's data buffer with new data.
- **Parameters:** Session pointer, new data, new data length
- **Returns:** 0 on success, -1 on error

### Store Functions

#### `void store_init(store_t *st)`
Initializes an empty store.

#### `int store_add(store_t *st, session_t *s)`
Adds a session to the store.
- **Returns:** 0 on success, -1 on error

#### `session_t *store_get(store_t *st, const char *id)`
Retrieves a session by its ID.
- **Returns:** Pointer to session, NULL if not found

#### `int store_delete(store_t *st, const char *id, session_t **out)`
Deletes a session from the store by ID.
- **Returns:** 1 if deleted, 0 if not found

#### `void store_destroy(store_t *st)`
Safely deallocates all sessions and the store.

## Usage Examples

### Basic Session Creation
```c
session_t *sess = session_create("sess1", 1001, (unsigned char *)"data", 4);
if (sess) {
    /* Use session */
    session_destroy(sess);
}
```

### Store Operations
```c
store_t store;
store_init(&store);

/* Create and add sessions */
session_t *sess1 = session_create("id1", 100, (unsigned char *)"secret", 6);
store_add(&store, sess1);

/* Retrieve session */
session_t *found = store_get(&store, "id1");

/* Clean up */
store_destroy(&store);
```

## Command Format

The program accepts the following commands (one per line):
- `ADD <id> <uid> <data>` - Add a new session
- `GET <id>` - Retrieve session data
- `SET <id> <data>` - Update session data
- `DEL <id>` - Delete a session
- `CLEAR` - Remove all sessions
- `EXIT` - Terminate program

### Output
- `OK` - Operation succeeded
- `NO` - Operation failed
- `FOUND` - Session found with data
- `NOTFOUND` - Session not found

## Building

```bash
make -f Makefile.txt
```

This compiles the program to the `test` executable.

## Testing

Run the compiled executable:
```bash
./test
```

Then enter commands interactively, or pipe in a command file:
```bash
./test < commands.txt
```

## Key Security Considerations

1. **Memory Management:** All allocated memory is properly freed to prevent memory leaks
2. **Input Validation:** Functions validate pointers and parameters before use
3. **Session Isolation:** Each session maintains its own data buffer
4. **Secure Cleanup:** Session destruction zeros/frees sensitive data

## Compilation Flags

Standard C compilation with common flags:
- `-Wall` - Enable all warnings
- `-Wextra` - Extra warning messages
- `-std=c99` - C99 standard compliance

## Author

Developed as part of Holberton School low-level programming coursework.
