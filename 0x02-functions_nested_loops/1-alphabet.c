#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* main - print_alphabet in lowercase
*
* Description: 'Prints 10 times the alphabet, in lowercase.'
*
* Return: end progress
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

