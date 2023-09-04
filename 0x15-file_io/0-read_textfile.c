#include "main.h"

/**
* read_textfile - reads the number of letters if  a file exists
* @filename: name of the file
* @letters: number of letters in the file
*
* Return: numbers of letters printed. Othewise return 0 if null or fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t n_rd, n_wr;

	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	n_rd = read(fd, buff, letters);
	n_wr = write(STDOUT_FILENO, buff, n_rd);
	close(fd);
	free(buff);
	return (n_wr);
}
