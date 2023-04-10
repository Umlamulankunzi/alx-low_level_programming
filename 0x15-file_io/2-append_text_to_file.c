#include "main.h"

/**
* append_text_to_file - appends text at end of file.
* @filename: filename.
* @text_content: string to append to file.
* Return: 1 if successful Else -1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_id, written_chars, len_str = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		file_id = open(filename, O_WRONLY | O_APPEND);
		if (file_id < 0)
			return (-1);

		while (*(text_content + len_str))
			len_str++;

		written_chars = write(file_id, text_content, len_str);
		if (written_chars < 0)
		{
			close(file_id);
			return (-1);
		}
	}
	close(file_id);
	return (1);
}
