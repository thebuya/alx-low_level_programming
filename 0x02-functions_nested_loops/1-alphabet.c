#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
* print_alphabet - Prints putchar
* Return: Always 0.
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

