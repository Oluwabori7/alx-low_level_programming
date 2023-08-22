#include "main.h"

/**
* print_rev - print string in a reverse manner
* @s: string to be reversed
* Return: void
*/

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\n' ; i++)
		count++;
	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
