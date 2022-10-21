#include "main.h"
/**
 * isupper - check for uppercase chars
 *
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
        c = 0;
	char a;

	for (a = 'A'; a <= 'Z';  a++)
	{
		if (a >= 'A' && a <= 'Z')
		{
		       	c = 1;
		}
	}
	return (c);
}

