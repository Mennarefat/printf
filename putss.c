#include "main.h"
/**
 * putss - print string
 *
 * @c: string
 * return: number opt byte
 */
int putss (char *c)
{
        int i= 0;

        if(c)
        {
                for (i =0 ; c[i] != '\0' ; i++)
                {
                        putchar(c[i]);
                }
        }
        return (i);
}
