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
	int i, j, flag;
	unsigned int cnt = 0;

	for (i = 0; i < strlen(s); i++)
	{
		flag = 0;
		for (j = 0; j < strlen(accept); j++)
			if (accept[j] == s[i])
			{
				flag = 1;
				break;
			}
		if (!flag)
			break;
		else
			cnt++;
	}
	return (cnt);
}
