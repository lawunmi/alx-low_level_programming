#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: first string arguement
 * @s2: second string arguement
 * Return: response after comparison betweenstrings
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, res;

	for (i = 0; s1[i] != '\0'; i++)
		for (j = 0; s[j] != '\0'; j++)
			res = s1[i] - s2[j];
		return (res);
}
