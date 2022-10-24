#include "main.h"
/**
 * print_rev - function that prints string in reverse
 *
 * @s: a string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
