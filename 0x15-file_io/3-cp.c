#include "main.h"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * cp - ...
 * @file_from: file that is copied
 * @file_to: file that copied to
 * Return: ...
*/
void cp(char *file_from, char *file_to)
{
	int output, input;
	char buffer[1024];
	int read_bytes, write_result;

	input = open(file_from, O_RDONLY);
	if (input == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	output = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (output == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((read_bytes = read(input, buffer, 1024)) > 0)
	{
	write_result = write(output, buffer, read_bytes);
	if (write_result == -1 || write_result != read_bytes)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
	}
	}
	if (read_bytes == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
	}
	if (close(input))
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input);
	exit(100);
	}
	if (close(output))
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output);
	exit(100);
	}
}
/**
 * main - entry point
 * @argc: ...
 * @argv: ...
 * Return: ...
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
