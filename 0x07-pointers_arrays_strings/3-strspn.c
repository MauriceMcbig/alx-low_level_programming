#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
	int r, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	r = 0;
	while (str1[r] != '\0') /*Declaring WHILE *s */
	{
		j = 0;
		while (str2[j] != '\0') /*Declaring WHILE *accept*/
		{
			if (str2[j] == str1[r]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			j++;    /*add j+1*/
		}

		if (s[r] != accept[j]) /*If aren't equals*/
		{
			break;
		}

		r++; /*add x+1*/
	}

	return (count); /*return the value of count*/
}
