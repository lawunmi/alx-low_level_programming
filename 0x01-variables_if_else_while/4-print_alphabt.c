#include <stdio.h>
/**
 * main - prints alphabets in lowercase except q and e
 * Return: 0
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' and c!= 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
