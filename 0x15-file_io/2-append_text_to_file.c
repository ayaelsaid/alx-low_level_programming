#include "main.h"
/**
 * _strlen - ...
 * @s: ...
 * Return: ...
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 * Return: ...
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bytes;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		bytes = write(f, text_content, _strlen(text_content));
		if (bytes == -1 || bytes != _strlen(text_content))
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
