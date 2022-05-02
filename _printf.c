#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * _printf - a function to print anything on the standaoutput
 * @format: these are fromat specifiers (%c, %s, %%)
 * Return: this returns the number of char printed out
 */
int _printf(const char *format, ...)
{
int i, len, j, t = 0;
va_list args;
while (format[len] != '\0')
{
	len++;
};
char *ptr;
ptr = malloc(sizeof(char) * (len + 1));
if (ptr == NULL)
	return (1);
va_start(args, format);
while (format[i] != '\0')
{
	if (format[i] == '%')
	{
		i++;
		if (format[i] == 'c')
		{
			ptr[j] = va_arg(args, int);
			j++;
		}
		else if (format[i] == 's')
		{
			char *s = va_arg(args, char *);
			while (s[t] != '\0')
			{
				ptr[j] = s[t];
				t++;
				j++;
			}
			ptr[j] == '\0';
		}
		else if (format[i] == '%')
		{
			ptr[j] = '%';
			j++;
		}
	}
	else
	{
		ptr[j] = format[i];
		j++;
	}
	i++;
}
write(1, ptr, len++);
free(ptr);
return (i++);
}

