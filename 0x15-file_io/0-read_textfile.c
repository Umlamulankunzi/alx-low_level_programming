#include "main.h"


/**
* read_textfile - read text file and prints it to the POSIX standard output
* @filename: filename.
* @letters: numbers of letters to read and print.
* Return: if successful number of letters read and printed Else 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_id;
	ssize_t chars_read, chars_printed;

	if (!filename)
		return (0);

	file_id = open(filename, O_RDONLY);
	if (file_id == -1)  /** Encountered Error*/
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);

	chars_read = read(file_id, buffer, letters);
	chars_printed = write(STDOUT_FILENO, buffer, chars_read);
	free(buffer);       /** Free memory */
	close(file_id);
	return (chars_printed);
}
