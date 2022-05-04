#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @c: string passed as argument
 * Return: return length of string
 */

int _strlen(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}
/**
 * use_c - to deal with %c
 * @args: type of argument to be passed
 * Return: int
 */
int use_c(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}
/**
 * use_s - to deal with %s
 * @args: type of argument to be passed
 * Return: int
 */
int use_s(va_list args)
{
/*declare a char pointer*/
char *s;
int i, len;
s = va_arg(args, char *);
if (!s)/*if string is NULL*/
s = "(nil)";
else if (*s == '\0')/*checking for empty string*/
	return (-1);
len = _strlen(s);/*get length of string arg*/
for (i = 0; s[i]; i++)
	_putchar(s[i]);
return (i);
}

