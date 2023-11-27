#include "main.h"

/**
 * read_textfile - reads a text file and print it to std output
 * @filename: variable pointer
 * @letters: size letters
 *
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t wri;
	int fd, lue;
	char *texte;


	if (filename == NULL)
		return (0);

	texte = malloc(letters);

	if (texte == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(texte);
		return (0);


	}

	lue = read(fd, texte, letters);
	if (lue < 0)
	{
		close(fd);
		free(texte);
	}

	wri = write(STDOUT_FILENO, texte, lue);
	close(fd);
	free(texte);
	return (wri);
}
