#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: arguement to be passed
 */

void rev_string(char *s)
{
	int i, cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
		cnt++;
	for (i = cnt - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
