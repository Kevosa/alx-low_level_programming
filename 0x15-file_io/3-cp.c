#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(const char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates memory for a buffer.
 * @file: The name of the file the buffer is associated with.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(const char *file)
{
    char *buffer;

    buffer = malloc(sizeof(char) * BUFFER_SIZE);

    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't allocate memory for %s\n", file);
        exit(EXIT_CODE_MEMORY);
    }

    return buffer;
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
    if (close(fd) == -1)
    {
        perror("Error");
        exit(EXIT_CODE_CLOSE);
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
    int src_fd, dest_fd, bytes_read, bytes_written;
    char *buffer;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(EXIT_CODE_ARG_COUNT);
    }

    buffer = create_buffer(argv[2]);
    src_fd = open(argv[1], O_RDONLY);
    dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, FILE_PERMISSIONS);

    if (src_fd == -1 || dest_fd == -1)
    {
        perror("Error");
        free(buffer);
        exit(98 + src_fd - dest_fd);
    }

    do
    {
        bytes_read = read(src_fd, buffer, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            perror("Error");
            free(buffer);
            close_file(src_fd);
            close_file(dest_fd);
            exit(EXIT_CODE_READ_SRC);
        }

        bytes_written = write(dest_fd, buffer, bytes_read);
        if (bytes_written == -1)
        {
            perror("Error");
            free(buffer);
            close_file(src_fd);
            close_file(dest_fd);
            exit(EXIT_CODE_WRITE_DEST);
        }
    } while (bytes_read > 0);

    free(buffer);
    close_file(src_fd);
    close_file(dest_fd);

    return 0;
}

