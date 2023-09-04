#include "main.h"

/**
* create_file - creates file
* @filename: name of the file
* @text_content: text to insert into the ffile
*
* Return: 1 on success, otherwise -1.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	int totlets;

	int r_wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (totlets = 0; text_content[totlets]; totlets++)
		;
	r_wr = write(fd, text_content, totlets);
	if (r_wr == -1)
		return (-1);
	close(fd);

	return (1);
}
