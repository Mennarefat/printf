#include "main.h"
void pbuff(char buffer[], int *bind);
int get_sz(const char *format, int *i);
int get_flgs(const char *format, int *i);
int get_precisn(const char *format, int *i, va_list args);
int get_wdth(const char *format, int *i, va_list args);
int handle_s_count(const char *fmt, int *ind, va_list args, char buffer[],int flgs, int wdth, int precisn, int sz);
/**
*_printf - Printf to stdout formatted text
*@format: format specifier
* Return: no of bytes printed
*/
int _printf(const char *format, ...)
{
int i, s_count, count = 0;
int flgs, wdth, precisn, sz, bind = 0;
char buffer[BUFF_SIZE];
va_list args;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
buffer[bind++] = format[i];
if (bind == BUFF_SIZE)
pbuff(buffer, &bind);
count++;
}
else
{
pbuff(buffer, &bind);
flgs = get_flgs(format, &i);
wdth = get_wdth(format, &i, args);
precisn = get_precisn(format, &i, args);
sz = get_sz(format, &i);
++i;
s_count = handle_s_count(format, &i, args, buffer, flgs, wdth, precisn, sz);
if (s_count == -1)
return (-1);
count += s_count;
}
}
pbuff(buffer, &bind);
va_end(args);
return (count);
}

