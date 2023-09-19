#include "main.h"
int inchr(char c);
int insert(char *c);
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
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
inchr(format[i]);
}
else if (format[i] == '%' && format[i + 1] == '0')
{
inchr(va_arg(args, int));
i++;
}
else if (format[i + 1] == 's')
{
s_count = insert(va_arg(args, char *));
i++;
count += (s_count - 1);
}
else if (format[i + 1] == '%')
{
inchr('%');
}
}
count++;
return (count);
va_end(args);
}

