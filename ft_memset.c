#include "libft.h"


void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *cast;

    cast = (unsigned char *)b;

    while(len--)
    {
        *cast = c;
        cast++;
    }
    return(b);
}