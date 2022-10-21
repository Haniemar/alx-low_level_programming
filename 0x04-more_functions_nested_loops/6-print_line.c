#include "main.h"
/**
 * print_line - draw straight line
 * @n: Input integer
 * Return: Always return 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > '0')
	{
		for (; i > '0'; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
