#include "main.h"
/**
 * _memcpy - copy from src to dest
 * @dest: pointer to char
 * @src: pointer to char
 * @n: bytes
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
