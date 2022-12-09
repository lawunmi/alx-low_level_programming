#include <stdio.h>

/**
 * main - function to print prints the size of various types on the computer
 * Return: Always 0
 */

int main(void){

	printf("Size of char: %d", sizeof(char),"byte(s)\n");
	printf("Size of int: %d", sizeof(int),"byte(s)\n");
	printf("Size of long int: %d", sizeof(long int),"byte(s)\n");
	printf("Size of long long int: %d", sizeof(long long int),"byte(s)\n");
	printf("Size of float: %d", sizeof(float),"byte(s)\n");
	return(0);

}
