#include "main.h"

/**
 * *_strcopy - copies the string pointed to by src
 * including the terminating (\0) null byte
 * to the buffer pointer to by dest
 * @dest: pointer to the buffer where we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
