#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Print error message and exit with specified code.
 * @code: Exit code
 * @message: Error message
 */
void error_exit(int code, char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * copy_file - Copy content from source file to destination file.
 * @file_from: Name of the source file
 * @file_to: Name of the destination file
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, nread;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
		error_exit(99, "Can't write to file");

	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, nread) != nread)
			error_exit(99, "Can't write to file");
	}

	if (nread == -1)
		error_exit(98, "Can't read from file");

	if (close(fd_from) == -1)
		error_exit(100, "Can't close fd");

	if (close(fd_to) == -1)
		error_exit(100, "Can't close fd");
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return 97;
	}

	copy_file(argv[1], argv[2]);

	return 0;
}
