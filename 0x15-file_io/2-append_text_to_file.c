#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file.
 *
 * @filename: This is the pointer to the name of the actual file.
 *
 * @text_content: This is the str that will be added at the end of the file
 *
 * Return: on failure or filename is NULL return -1,
 *
 * if file is none extent and no writer permission also return -1,
 *
 * or else on success return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
