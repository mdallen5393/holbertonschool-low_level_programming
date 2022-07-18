#include "main.h"

void reset_buffer(char *buffer);
void err_test_97(int ac, char *name);
void err_test_98(int fd, char *name);
void err_test_99(int status, char *name);
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
	int fd_from, fd_to, bytes = 1024;
	char buffer[1024] = {'\0'}, dummy[1024] = {'\0'};

	err_test_97(ac, av[0]);

	file_from = av[1];
	file_to = av[2];

	err_test_98(fd_from = open(file_from, O_RDONLY), file_from);
	err_test_98(fd_to = open(file_to, O_CREAT | O_WRONLY, 0664), file_to);

	bytes = read(fd_from, buffer, 1024);

	err_test_99(write(fd_to, buffer, bytes), file_to);

	reset_buffer(buffer);
	err_test_100(close(fd_to), fd_to);

	err_test_98(fd_to = open(file_to, O_RDWR | O_APPEND), file_to);
	read(fd_to, dummy, bytes);

	while (bytes == 1024)
	{
		bytes = read(fd_from, buffer, 1024);
		err_test_99(write(fd_to, buffer, bytes), file_to);
		reset_buffer(buffer);
	}

	err_test_100(close(fd_from), fd_from);
	err_test_100(close(fd_to), fd_to);

	return (1);
}

/**
 * reset_buffer - resets buffer to null terminating characters
 * @buffer: buffer to reset
 */
void reset_buffer(char *buffer)
{
	int i = 0;

	while (buffer[i] != '\0')
	{
		buffer[i] = '\0';
		i++;
	}
}

/**
 * err_test_97 - test for correct number of arguments
 * @ac: num args
 * @name: function
 */
void err_test_97(int ac, char *name)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", name);
		exit(97);
	}
}

/**
 * err_test_98 - test for success of read()
 * @fd: file descriptor
 * @name: name of file
 */
void err_test_98(int fd, char *name)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(98);
	}
}

/**
 * err_test_99 - test for success of write()
 * @status: return status of write
 * @name: name of file
 */
void err_test_99(int status, char *name)
{
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
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
