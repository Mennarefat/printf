#include "main.h"
int putchr(char c);
int putss(char *c);
/**
*_printf - Printf to stdout formatted text
*@format: format specifier
* Return: no of bytes printed
*/
int _printf(const char *format, ...)
{
unsigned int i, s_count, count = 0;
va_list args;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
for (i = 0; format && format[i] != '\0'; i++)
if (format[i] != '%')
{
putchr(format[i]);
}
else if (format[i] == '%' && format[i + 1] == '0')
{
putchr(va_arg(args, int));
i++;
}
else if (format[i + 1] == 's')
{
s_count = putss(va_arg(args, char *));
i++;
count += (s_count - 1);
}
else if (format[i + 1] == '%')
{
putchr('%');
}
count += 1;
va_end(args);
return (count);
}
