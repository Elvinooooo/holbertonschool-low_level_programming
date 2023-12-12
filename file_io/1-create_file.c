#include "main.h"
/**
 *create_file  -  function that creates file
 *@filename: the name of the file
 *@text_content: the text of the file
 *Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd1, len;
	
	len = 0;
	if (filename == NULL)
		return (-1);
	while(text_content[len])
		len++;
	fd = open(filename, O_CREAT | O_TRUNC, 0644);
	fd1 = write(fd, text_content, len);
	if (fd == -1 || fd1 == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
