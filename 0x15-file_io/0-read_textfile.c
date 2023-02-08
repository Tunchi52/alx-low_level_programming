#include "main.h"

/**
  * read_textfile - function to read content of a file and printf to STDOUT
  * @file_name: full path of the file to read
  * @chrs: characters to read.
  *
  *Return: 0 on success
  */
ssize_t read_textfile(const char *file_name, size_t chrs)
{
	int filedesc;
	int read_chars;
	char *buffer;

	/* set buffer size */
	buffer = malloc(sizeof(char *) * chrs);

	/* check if buffer is empty */
	if (buffer == NULL)
		return (0);

	/* check if file_name is empty */
	if (file_name == NULL)
		return (0);

	/* set file descriptor */
	filedesc = open(file_name, O_RDONLY);
	if (filedesc == -1)
		return (0);

	read_chars = read(filedesc, buffer, chrs);
	write(STDOUT_FILENO, buffer, read_chars);

	free(buffer);
	close(filedesc);
	return (read_chars);
}
