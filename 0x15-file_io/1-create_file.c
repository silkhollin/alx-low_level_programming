#include "main.h"
/**
* create_file - creates a file
* @filename: a filename
* @text_content: content to be writen to the file.
*
* Return: 1 if it success and -1 for failure
*/
int create_file(const char *filename, char *text_content)
{
	int fo, num, wr;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";
	for (num = 0; text_content[num]; num++)
		;

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fo == -1)
		return (-1);
	wr = write(fo, text_content, num);
	if (wr == -1)
		return (-1);

	close(fo);

	return (1);

}

