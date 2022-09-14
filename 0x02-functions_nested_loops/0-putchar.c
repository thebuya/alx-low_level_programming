#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* Description: Program that prints out putchar
*
* return: Success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	putchar ('\n');
	return (0);
}
