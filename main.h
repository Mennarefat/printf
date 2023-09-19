#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
int _printf(const char *format, ...);
int inchr(char c);
int insert(char *c);


int print_char(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],int flags, int width, int precision, int size);

int get_size(const char *format, int *i)

#endif
