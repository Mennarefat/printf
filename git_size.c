#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int j= *i + 1;
	int S= 0;

	if (format[j] == 'l')
		S = S_LONG;
	else if (format[j] == 'h')
		S = S_SHORT;

	if (S== 0)
		*i =j- 1;
	else
		*i =j;

	return (S);
}

