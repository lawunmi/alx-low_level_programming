#include <stdio.h>
/**
 * main - function that prints the alphabet, in lowercase, then a new line.
 * Return: 0
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
