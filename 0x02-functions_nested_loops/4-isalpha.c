#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase.0 otherwise
 *
 */
int _isalpha(int c)
{
	int res;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		res = 1;
	else
		res = 0;
	return (res);
}
