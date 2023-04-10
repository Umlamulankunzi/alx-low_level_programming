#include "main.h"


/**
* close_file_and_log_if_error - close file and prints error msg if error.
* @file_id: file descriptor id of file to close.
* Return: 1 if successful Else 1 on error.
*/
int close_file_and_log_if_error(int file_id)
{
	int error_id;

	error_id = close(file_id);
	if (error_id < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_id);

	return (error_id);
}



/**
* log_file_err_and_exit - log error message to STDERR.
* @error_msg: string to print to STDERR.
* @filename: filename caused the error.
* @exit_code: int code to call exit with
*/
void log_file_err_and_exit(char *error_msg, char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", error_msg, filename);
	exit(exit_code);
}





/**
* main - starting point of program.
* @argc: number of args passed to program.
* @argv: array of args passed to program.
* Return: 01 if successful Else -1
*/
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int read_bytes = 0, file_from_id, file_to_id, E_O_F = 1, status = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from_id = open(argv[1], O_RDONLY);
	if (file_from_id < 0)
		log_file_err_and_exit("Error: Can't read from file", argv[1], 98);

	file_to_id = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to_id < 0)
	{
		close_file_and_log_if_error(file_from_id);
		log_file_err_and_exit("Error: Can't write to", argv[2], 99);
	}

	while (E_O_F)
	{
		E_O_F = read(file_from_id, buffer, BUFFER_SIZE);
		if (E_O_F < 0)
		{
			close_file_and_log_if_error(file_from_id);
			close_file_and_log_if_error(file_to_id);
			log_file_err_and_exit("Error: Can't read from file", argv[1], 98);
		}
		else if (!E_O_F)
			break;

		read_bytes += E_O_F;
		status = write(file_to_id, buffer, E_O_F);
		if (status < 0)
		{
			close_file_and_log_if_error(file_from_id);
			close_file_and_log_if_error(file_to_id);
			log_file_err_and_exit("Error: Can't write to", argv[2], 99);
		}
	}

	status = close_file_and_log_if_error(file_to_id);
	if (status < 0)
	{
		close_file_and_log_if_error(file_from_id);
		exit(100);
	}

	status = close_file_and_log_if_error(file_from_id);
	if (status < 0)
		exit(100);
	return (0);
}
