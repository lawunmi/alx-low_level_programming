#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @s: part of memory to be changed
 * @b: bytes to be changed with
 * @n: number of bytes to be changed in memory
 * Return: a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
