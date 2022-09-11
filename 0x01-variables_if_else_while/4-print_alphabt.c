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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar (letter);
		}
		else
		{
			continue;
		}
	}
	putchar ('\n');
	return (0);
}



