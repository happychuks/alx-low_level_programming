#include "main.h"

/**
 * _strncpy - Copy a string startin from dest[0]
 * @dest: string
 * @src: string
 * @n: number of chars to copy
 * Return: updated `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
