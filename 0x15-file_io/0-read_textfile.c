#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of file to be read/printed
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(*buffer) * (letters));
	if (!buffer)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, buffer, letters);
	if (bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	/*buffer[letters] = '\0';*/

	if (write(1, buffer, bytes) != bytes)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (bytes);
}
