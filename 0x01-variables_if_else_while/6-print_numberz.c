#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main function
*
* a program that prints the alphabet in lowercase.
* Return: end progress
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	putchar('\n');
	return (0);
}



