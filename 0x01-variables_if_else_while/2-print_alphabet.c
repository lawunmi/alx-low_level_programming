#include <stdio.h>
/**
 * main - prints alphabet in lowercase using putchar followed by a newline
 * Return: 0
 *
 */
int main(void)
{
	int num;

	for (num = 0; num <= 25; num++)
		putchar(num);
		putchar('\n');
	return (0);
}
