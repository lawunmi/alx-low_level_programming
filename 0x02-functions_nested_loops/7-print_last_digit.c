#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @i: arguement to be used to find the last number
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i *= -1;
		_putchar((i % 10) + '0');
	}
	return (i % 10);
}
