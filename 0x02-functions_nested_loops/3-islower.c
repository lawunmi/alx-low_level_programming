#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase. 0 otherwise.
 *
 */
int _islower(int c)
{
	int res;

	if (c >= 'a' && c <= 'z')
		res = 1;
	else
		res = 0;

	return (res);
}
