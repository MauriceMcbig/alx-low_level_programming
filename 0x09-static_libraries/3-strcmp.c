#include "main.h"
/**
 *_strcmp - compares two strings
 *@p1: A pointer to a character that will be changed
 *@p2: A pointer to a character that will also be changed/modified/updated
 *Return: dest
 */

int _strcmp(char *p1, char *p2)

{

char *str_one = p1;
char *str_two = p2;


while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
{
str_one++;
str_two++;
}

return (*str_one - *str_two);
}
