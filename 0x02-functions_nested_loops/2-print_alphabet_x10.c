#include "main.h"
/**
* print_alphabey_x10 - Description
* 
* Return: 0
*/
void print_alphabet_x10(void);
{
	char letter, no_of_times;

	for (no_of_times =0; no_of_times <= 9; no_of_times++)
	{
		for (letter ='a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
	
}
