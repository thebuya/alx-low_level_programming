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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
