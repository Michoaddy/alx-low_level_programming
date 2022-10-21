#include "main.h"

/**
 * _isupper - check uppercase leteers
 * @c: is character to be checked
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
