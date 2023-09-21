#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
*_printf - Printf to stdout formatted text
*@format: format specifier
* Return: no of bytes printed
*/
int _printf(const char *format, ...)
{
    unsigned int i ,count=0 ,s_count;

    va_list args;

    va_start(args, format);

    for( i=0 ; format[i] != '\0' ; i++)
    {
        if ( format[i] != '%')
        {
            putchar(format[i]);
        }
        else {
                if (format[i+1] == 'c')
        {
            putchar(va_arg(args,int));
            i++;
        }
          else{
                if (format[i+1] == 's')
                {
                   s_count = puts(va_arg(args, char *));
                   i++;
                   count += (s_count - 1);
                }
                else{
                    if (format[i+1] == '%')
                        {
                        putchar('%');
                        }
                }

        }
        }
        count += 1;
    }


return (count);
}

