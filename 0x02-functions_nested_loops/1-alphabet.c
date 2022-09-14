#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* main - print_alphabet in lowercase
* * print_alphabet - Prints 10 times the alphabet, in lowercase.
* Return: end progress
*/

void print_alphabet(void) /* Prints 10 times the alphabet, in lowercase. */
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

