#include <stdio.h>
/**
* main - print data type sizes
*
* Return: always (0)
*
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu byte(s)\n", sizeof(a));
	printf("size of an int: %lu bytes(s)\n", sizeof(b));
	printf("size of a long int: %lu bytes(s)\n", sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
