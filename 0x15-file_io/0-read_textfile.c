#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fh;
	ssize_t byte;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fh = open(filename, O_RDONLY);
	if (fh == -1)
		return (0);
	byte = read(fh, &buf[0], letters);
	byte = write(STDOUT_FILENO, &buf[0], byte);
	close(fh);
	return (byte);
}
