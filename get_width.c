#include "main.h"
int is_digit(char);
/**
*get_width-Calculates the width for printing
*@format:Formatted string to print the arguments.
*@i:List of arguments to be printed.
*@list:list of arguments.
*
*Return:width.
*/
int get_width(const char *format, int *i, va_list list)
{
int ci;
int width = 0;
for (ci = *i + 1; format[ci] != '\0'; ci++)
{
if (is_digit(format[ci]))
{
width *= 10;
width += format[ci] - '0';
}
else if (format[ci] == '*')
{
ci++;
width = va_arg(list, int);
break;
}
else
break;
}
*i = ci - 1;
return (width);
}
