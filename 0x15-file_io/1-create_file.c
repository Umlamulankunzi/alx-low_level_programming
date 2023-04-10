#include "main.h"

/**
 * create_file - creates a file.
 * @filename: filename.
 * @text_content: string to write to the file
 * Return: 1 if successful Else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int written_chars, file_id, len_str = 0;

	if (filename == NULL)
		return (-1);

	file_id = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_id < 0)
		return (-1);

	if (!text_content)
	{
		close(file_id);
		return (1);
	}

	while (*(text_content + len_str))
		len_str++;

	written_chars = write(file_id, text_content, len_str);
	close(file_id);
	if (written_chars < 0)
		return (-1);
	return (1);
}
