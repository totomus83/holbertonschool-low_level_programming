#ifndef _NAME_
#define _NAME_

#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* MAIN_H */
