#include "main.h"
/**
 * use_c - to deal with %c
 * @args: type of argument to be passed
 * Return: int
 */
int use_c(va_list args)
{
int i = 0;
char c = va_arg(args, int);
_putchar(c);
return (i++);
}
/**
 * use_s - to deal with %s
 * @args: type of argument to be passed
 * Return: int
 */
int use_s(va_list args)
{
int i = 0;
char *s = va_arg(args, char *);
while (s[i])
{
	_putchar(s[i]);
	i++;
}
return (i);
}

