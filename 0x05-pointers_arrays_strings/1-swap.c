#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first arguement
 * @b: second arguement
 */

void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
