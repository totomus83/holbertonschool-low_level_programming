#ifndef _VARIADIC_NUM_
#define _VARIADIC_NUM_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct format_types - Struct format_types
 * @identifier: The conversion specifier
 * @f: The function pointer
 */

typedef struct format
{
char *op;
void (*f)(va_list all);
} f;
#endif
