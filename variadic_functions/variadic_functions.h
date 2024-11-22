#ifndef _VARIADIC_NUM_
#define _VARIADIC_NUM_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);

typedef struct format
{
char *op;
void (*f)(va_list all);
} f;
#endif
