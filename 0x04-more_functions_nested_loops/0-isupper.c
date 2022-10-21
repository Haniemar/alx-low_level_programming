#include "main.h"
/**
 * _isupper - check for uppercase chars
 *@c: input integer
 *
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	char a;

	c = 0;
	for (a = 'A'; a <= 'Z';  a++)
	{
		if (a >= 'A' && a <= 'Z')
		{
			c = 1;
		}
	}
	return (c);
}

