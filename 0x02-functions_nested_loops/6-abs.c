#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @i: arguement to be passed
 *
 * Return: returns absolute value of a number
 */
int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
