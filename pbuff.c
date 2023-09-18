#include "main.h"
/**
*pbuff - Prints the contents of the buffer
*@buffer: Array of chars
*@bind: Index to add next char, represents the arr.size
*/
void pbuff(char buffer[], int *bind)
{
if (*bind > 0)
write(1, &buffer[0], *bind);
*bind = 0;
}

