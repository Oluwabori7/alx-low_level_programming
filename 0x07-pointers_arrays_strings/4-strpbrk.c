#include "main.h"

/**
* _strpbrk - searches for character match between two strings
* @s: the string to search from
* @accept: the string to search in s
* Return: accept or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *t = accept;

		while (*t != '\0')
		{
			if (*s == *t)
				return (s);
			t++;
		}
		s++;
	}
		return (NULL);
}
