#include "main.h"
/**
 * *_strcpy - copies the string
 * @dest: pointed to the buffer in which we copy the string
 * @src: string to br copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
