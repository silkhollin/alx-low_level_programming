#include "main.h"
/**
* read_textfile - reads a text file and reads the letters
* @filename: file to be read
* @letters: numbers of letters read
*
* Return: number of letters read and 0 for failure or NULL file
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, wr, rd;
	char *buf;

	fo = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	rd = read(fo, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fo);
	free(buf);

	return (wr);
}
