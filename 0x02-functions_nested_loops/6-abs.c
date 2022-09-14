#include <main.h>
#include <stdio.h>
/**
* _putabs - function
* @c: arg
* Return: 0 Always
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
