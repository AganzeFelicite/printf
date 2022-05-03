#include "main.h"
/**
 *_putcahr - to print a char on th output
 *@c:char to be printed
 *Return: an int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

