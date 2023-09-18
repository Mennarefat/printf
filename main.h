#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#define BUFF_SIZE 1024
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
#define S_LONG 2
#define S_SHORT 1
void pbuff(char buffer[], int *bind);
int print_char(va_list types, char buffer[],int flgs, int wdth, int precisn, int sz);
int print_string(va_list types, char buffer[],int flgs, int wdth, int precisn, int sz);
int print_percent(va_list types, char buffer[],int flgs, int wdth, int precisn, int sz);
int print_int(va_list types, char buffer[],int flgs, int wdth, int precisn, int sz);
int _printf(const char *format, ...);
int get_sz(const char *format, int *i);
int get_flgs(const char *format, int *i);
int get_precisn(const char *format, int *i, va_list args);
int get_wdth(const char *format, int *i, va_list args);
int handle_s_count(const char *fmt, int *ind, va_list args, char buffer[],int flgs, int wdth, int precisn, int sz);
#endif
