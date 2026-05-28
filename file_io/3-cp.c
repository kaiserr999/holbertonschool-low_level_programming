#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * check_io_errors - Checks if file can be opened.
 * @file_from: file descriptor of the original file
 * @file_to: file descriptor of the copied file
 * @argv: argument vector
 */
void check_io_errors(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t b_read = 1024, b_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_io_errors(fd_from, fd_to, argv);

	while (b_read == 1024)
	{
		b_read = read(fd_from, buffer, 1024);
		if (b_read == -1)
			check_io_errors(-1, 0, argv);

		b_written = write(fd_to, buffer, b_read);
		if (b_written == -1 || b_written != b_read)
			check_io_errors(0, -1, argv);
	}

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
