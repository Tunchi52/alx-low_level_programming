#include "main.h"

/**
  * create_file - function to create a file if it does not exit & write to it
  * @file_name: name of file to create
  * @contents: NULL string to be written to the file
  * Return: On success (1), if error (-1)
  * Description: The function creates a file with the permission
  * "rw". truncates file content if file already exist
  * if the file_name is empty return -1.
  * if content is empty, create an empty file.
  */

int create_file(const char *file_name, char *contents)
{
	int filedesc, write_status, length = 0;

	if (file_name == NULL)
		return (-1);
	filedesc = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filedesc == -1)
		return (-1);
	if (contents == NULL)
	{
		contents = "";
	}
	while (contents[length])
		length++;
	write_status = write(filedesc, contents, length);
	if (close(filedesc) == -1)
		return (-1);
	if (write_status == -1)
		return (-1);
	return (1);
}
