#include "main.h"
/**
 * _isdigit - check for digit 0 through 9
 * @c: input integer
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
