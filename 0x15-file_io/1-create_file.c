#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of new file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));
	close(fd);

	return (1);
}
