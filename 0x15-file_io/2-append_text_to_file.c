#include "main.h"

/**
  * append_text_to_file - appends text to a file
  * @file_name: file to append to
  * @content: content to append to
  * Return: 1 on success, -1 on error
  */

int append_text_to_file(const char *file_name, char *content)
{
	int append_file, len, wr_stat;

	if (file_name == NULL)
		return (-1);
	append_file = open(file_name, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	if (content == NULL)
		return (1);
	for (len = 0; content[len]; len++)

	wr_stat = write(append_file, content, len);

	close(append_file);
	if (wr_stat == -1)
		return (-1);
	else
		return (1);
}
