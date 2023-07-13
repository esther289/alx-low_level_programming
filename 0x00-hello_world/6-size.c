#include <stdio.h>
/**
 * main - Program that prints the size of various types on the computer types
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of char: %d  byte(s)\n", sizeof(char));
printf("Size of int: %d byte(s)\n", sizeof(int));
printf("Size of long int: %d byte(s)\n", sizeof(long int));
printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of float: %d byte(s)\n", sizeof(float));
return (0);
}
