#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main function
*
* a program that prints the alphabet in lowercase.
* Return: end progress
*/
int main(void)
{
	char alphabet;
	char newline;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
	putchar(newline);
	return (0);
}
