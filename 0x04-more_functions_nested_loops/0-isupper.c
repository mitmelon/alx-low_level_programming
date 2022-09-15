#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character to check
 *
 * Return 0 or 1
 */

int _isupper(int c)
{
	if (c >= 41 && c <= 60)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
