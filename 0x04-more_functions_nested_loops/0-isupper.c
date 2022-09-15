#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase letters
 * @c: character to check
 *
 * Return 0 or 1
 */

int _isupper(char c)
{
	if (islower(c))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
