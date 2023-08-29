#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string to search from
* @needle: string to search for
* Return: a pointer to needle
*/

char *_strstr(char *haystack, char *needle)
{
	const char *t = needle;
	const char *h = haystack;
	int i;

	for (i = 0 ; h[i] < t[i] ; i++)
		h++;
	return (needle);
	return (NULL);
}
