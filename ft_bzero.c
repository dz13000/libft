#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *cast;
    cast = (char *)s;
    while(n--)
        *cast++ = '\0';
}