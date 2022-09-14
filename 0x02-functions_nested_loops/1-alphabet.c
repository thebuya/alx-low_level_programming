#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
* main - main function
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

