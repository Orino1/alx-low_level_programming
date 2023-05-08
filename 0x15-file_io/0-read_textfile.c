#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include "main.h"
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL) {
		return (0);
	}
	int fd = open(filename, O_RDONLY);
	if (fd == -1) {
		return (0);
	}
	char *buf = malloc(letters + 1);
	if (buf == NULL) {
		close(fd);
		return (0);
	}
	int bytes_read = read(fd, buf, letters);
	if (bytes_read == -1) {
		free(buf);
		close(fd);
		return (0);
	}
	buf[bytes_read] = '\0';
	int bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read) {
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return bytes_read;
}

