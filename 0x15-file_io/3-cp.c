#include "main.h"

void reset_buffer(char *buffer);
void err_test_97(int ac, char *name);
void err_test_98(char *file);
void err_test_99(int status, char *name);
void err_test_100(int status, int fd);

/**
 * main - copies the content of a file to another file.
 * @file_from: source file
 * @file_to: destination file
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

	err_test_98(file_from);

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY, 0664);

	bytes = read(fd_from, buffer, 1024);
	
	err_test_99(write(fd_to, buffer, bytes), file_to);

	reset_buffer(buffer);
	err_test_100(close(fd_to), fd_to);

	fd_to = open(file_to, O_RDWR | O_APPEND);
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
		dprintf(2, "Usage: %s file_from file_to\n", name);
		exit(97);
	}
}

/**
 * err_test_98 - test for success of read()
 * @file: name of file
 */
void err_test_98(char *file)
{	
	if (!file)
	{
		dprintf(2, "Error: Can't read from file %s\n", file);
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
		dprintf(2, "Error: Can't write to %s\n", name);
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
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
