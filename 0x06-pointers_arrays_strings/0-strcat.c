#include "main.h"
#include <string.h>
/**
 * *_strcat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: concatenation of both strings in @dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = strlen(dest);
	int len2 = strlen(src);

	for (i = len1; i <= len1 + len2; i++)
		dest[i] = src[i - len1];
		return (dest);
	dest[i] = '\0';
}
