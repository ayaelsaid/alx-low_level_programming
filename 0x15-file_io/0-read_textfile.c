#include "main.h"

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 * Return: ...
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int f;
	ssize_t bytes, write_res;

	if (!filename || letters == 0)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(f);
		return (0);
	}
	bytes = read(f, buffer, letters);
	if (bytes < 0)
	{
		free(buffer);
		close(f);
		return (0);
	}
	write_res = write(STDOUT_FILENO, buffer, bytes);
	if (write_res != bytes)
	{
		free(buffer);
		close(f);
		return (0);
	}
	free(buffer);
	close(f);
	return (bytes);
}
