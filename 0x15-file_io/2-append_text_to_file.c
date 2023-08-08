/**
 * append_text_to_file - Adds text at the end of a file.
 * @filename: filename
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *	   else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, wr, num = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	fo = open(filename, O_WRONLY | O_APPEND);
	wr = write(o, text_content, len);

	if (fo == -1 || wr == -1)
		return (-1);

	close(fo);

	return (1);
}

