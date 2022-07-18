#include "main.h"
#include <limits.h>

void reset_buffer(char *buffer);
void err_test_97(int ac);
void err_test_98(int fd_to, int fd_from, char *name);
void err_test_99(int status, char *name, int fd_to, int fd_from);
void err_test_100(int status, int fd);

/**
 * main - copies the content of a file to another file.
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	char *file_from, *file_to;
	int fd_from = 0, fd_to = 0, bytes_read = 1024, bytes_written = 0;
	char buffer[1024];

	err_test_97(ac);

	file_from = av[1];
	file_to = av[2];

	fd_from = open(file_from, O_RDONLY);
	err_test_98(fd_to, fd_from, file_from);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	err_test_98(fd_to, fd_from, file_to);

	while (bytes_read == 1024)
	{
		bytes_read = read(fd_from, buffer, bytes_read);
		err_test_98(bytes_read, bytes_written, file_from);
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			bytes_written = -1;
		err_test_99(bytes_written, file_to, fd_to, fd_from);
	}

	err_test_100(close(fd_from), fd_from);
	err_test_100(close(fd_to), fd_to);

	return (1);
}

/**
 * err_test_97 - test for correct number of arguments
 * @ac: num args
 */
void err_test_97(int ac)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * err_test_98 - test for success of read()
 * @fd_to: file descriptor file_to
 * @fd_from: file descriptor file_from
 * @name: name of file
 */
void err_test_98(int fd_to, int fd_from, char *name)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		if (fd_from != -1)
			close(fd_from);
		exit(98);
	}
}

/**
 * err_test_99 - test for success of write()
 * @status: return status of write
 * @name: name of file
 * @fd_to: file descriptor file_to
 * @fd_from: file descriptor file_from
 */
void err_test_99(int status, char *name, int fd_to, int fd_from)
{
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		close(fd_to);
		close(fd_from);
		exit(99);
	}
}

/**
 * err_test_100 - test for success of close()
 * @status: return status of close()
 * @fd: descriptor of file
 */
void err_test_100(int status, int fd)
{
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
