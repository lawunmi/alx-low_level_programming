#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase, followed by a newline.
 * Return: 0
 *
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		printf("%c", c);
	}
	printf("\n");
	return (0);
}
