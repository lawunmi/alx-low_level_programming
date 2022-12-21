#include "main.h"
#include <string.h>
/**
 * puts_half - print the second half of the string
 * @str: arguement to be passed
 */

void puts_half(char *str)
{
	int i, n;
	int len = strlen(str);

	for (len = 0; str[len] != '\0'; len++)
	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2);
	for (i = n + 1; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
