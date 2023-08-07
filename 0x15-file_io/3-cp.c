#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFF_SIZE 1024
#define FILE_PERMISSIONS 0664
/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: 0 on success, exit codes on failure
 */
int main(int argc, char **argv)
{
	int src_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, FILE_PERMISSIONS);

	if (src_fd == -1 || dest_fd == -1)
	{
		perror("Error");
		exit(98 + src_fd - dest_fd);
	}

	while ((bytes_read = read(src_fd, buffer, BUFF_SIZE)))
	{
		if (bytes_read == -1)
			perror("Error"), exit(98);

		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written == -1)
			perror("Error"), exit(99);
	}

	if (close(src_fd) == -1 || close(dest_fd) == -1)
	{
		perror("Error");
		exit(100);
	}

	return (0);
}

