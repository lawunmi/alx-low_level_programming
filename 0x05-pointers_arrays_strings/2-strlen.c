#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string.
 * s: pointer to be test
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;
	int cnt = 0;
	int len = strlen(s);

	for(i = 0; i < len; i++)
	{
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			cnt++;
	}
	return cnt;
}
