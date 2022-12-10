#include <stdio.h>
/**
 * main - prints alphabet in lowercase using putchar followed by a newline
 * Return: 0
 *
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
		putchar("\n");
	return (0);
}
