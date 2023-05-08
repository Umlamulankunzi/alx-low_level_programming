#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size_rd, size_wr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	size_rd = read(fd, buffer, letters);
	size_wr = write(STDOUT_FILENO, buffer, size_rd);

	close(fd);

	free(buffer);

	return (size_wr);
}

