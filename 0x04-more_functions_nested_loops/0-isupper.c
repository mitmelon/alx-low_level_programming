#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character to check
 *
 * Return 0 or 1
 */

int _isupper(int c)
{
	if (c >= 45 && c <= 59)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
