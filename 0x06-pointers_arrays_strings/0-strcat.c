#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to the string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}


	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}

	dest[i] = '\0';
	return (dest);
}
