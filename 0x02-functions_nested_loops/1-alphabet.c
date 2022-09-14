#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* main - print alphabet in lowercase 
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

