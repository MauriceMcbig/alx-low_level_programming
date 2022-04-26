#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 **/

char *_strchr(char *s, char f)
{

	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == f) /*if s ==  f*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == f)
	{
		return (s);

	}


	return (0);/* values null*/
}
