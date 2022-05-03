#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct specifier - struct ch
 * @str: pointer to string
 * @f: funtion pointer
 */
typedef struct specifier
{
char *str;
int (*f)(va_list);
} specifier;
/* declaretion of other functions*/
int _printf(const char *format, ...);
int counts(va_list args, char format);
int use_s(va_list args);
int use_c(va_list args);
int _putchar(char c);
#endif /* MAIN_H*/

