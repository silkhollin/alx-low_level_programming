#include "main.h"

/**
* append_text_to_file - inserts text at the end of the file
* @filename: name of the file
* @text_content: content to append
*
* Return: 1 if the file exists. -1 if the fails does not exist
* or on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	int numl;

	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (numl = 0;
		text_content[numl]; numl)
			;
		rwr = write(fd, text_content, numl);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
