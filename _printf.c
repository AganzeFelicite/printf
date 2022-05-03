#include "main.h"
/**
 * _printf - a function to print anything on the standaoutput
 * @format: these are fromat specifiers (%c, %s, %%)
 * Return: this returns the number of char printed out
 */

int _printf(const char *format, ...)
{
va_list args;
int i, count, sum = 0;
va_start(args, format);
if (format == NULL)
	return (-1);
for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] != '%')
	{
		_putchar(format[i]);
		sum++;
		continue;
	}
	if (format[i + 1] == '%')
	{
		_putchar('%');
		sum++;
		i++;
		continue;
	}
	while (format[i + 1] == ' ')
		i++;
	if (format[i + 1] == '\0')
		return (-1)
	count = counts(args, format[i + 1]);
	if (count == -1 || count != 0)
		i++;
	if (count == 0)
		_putchar('%');
		sum++;
	if (count > 0)
		sum += count;


}
va_end(args);
return (sum);
}

