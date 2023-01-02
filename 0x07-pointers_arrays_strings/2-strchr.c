#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be searched for.
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
			s++;
	}
	return (NULL);
}
