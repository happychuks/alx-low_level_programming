#include "main.h"

/**
 * _strcat - this concatenate two strings
 * @dest: char string to concatenate
 * @src: char string
 * Return: pointer to resulting string 
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	int c = 0;

	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}

	dest[i] = '\0';

	return (dest);
}
