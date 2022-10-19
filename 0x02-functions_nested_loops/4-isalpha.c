#include "main.h"

/**
 * _isalpha - check for charater if its lower or upper.
 *@c: is the character
 * Return: 1 if character is lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
