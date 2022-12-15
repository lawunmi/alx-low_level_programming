#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: arguement to be passed to check
 * Return: 1 if is uppercase. 0 otherwise
 */

int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
		res = 1;
	else
		res = 0;

	return (res);
}
