#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals
* @a: integer pointer
* @size: size of pointers
*/

void print_diagsums(int *a, int size)
{
	int c, b, y;

	c = 0;
	b = 0;

	for (y = 0 ; y < size ; y++)
	{
		c = c + a[y * size + y];
	}

	for (y = size - 1 ; y >= 0 ; y--)
	{
		b += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", c, b);
}
