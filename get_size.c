#include "main.h"
/**
*get_size - Calculates the size to cast the argument
*@format: Formatted string in which to print the arguments
*@i: List of arguments to be printed.
*
*Return:s
*/
int get_size(const char *format, int *i)
{
int j = *i + 1;
int s = 0;
if (format[j] == 'l')
s = S_LONG;
else if (format[j] == 'h')
s = S_SHORT;
if (s == 0)
*i = j - 1;
else
*i = j;
return (s);
}

