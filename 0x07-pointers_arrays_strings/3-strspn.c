#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: Character to be searched.
 * @accept: Character to be used to compare
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int cnt = 0;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
			if (accept[j] == s[i])
				cnt++;
	}
	return (cnt);
}
