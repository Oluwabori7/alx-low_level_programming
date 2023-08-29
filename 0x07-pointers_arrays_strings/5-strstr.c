#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string to search from
* @needle: string to search for
* Return: a pointer to needle
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
	const char *t = needle;
	const char *h = haystack;

	while (*h == *t && *t != '\0')
	{
		h++;
		t++;
	}

	if (*t == '\0')
		return (haystack);
	}
	return (NULL);
}
