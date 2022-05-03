#include "main.h"
/**
 * counts - counts and prints the specified arguments
 * @args: this the argument int the valiist
 * @format: apointer to the given string to be printed
 * Return: an int
 **/
int counts(va_list args, char format)
{
specifier  p[] = {
	{"c", use_c},
	{"s", use_s},
	{NULL, NULL}
};
int j;
for (j = 0; p[j].str != NULL; j++)
{
	if (format == *(p[j].str))
	{	return (p[j].f(args));
	}
	return (0);
}
}
