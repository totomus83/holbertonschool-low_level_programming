#ifndef IO_H
#define IO_H
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
