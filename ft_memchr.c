#include "libft.h"

#include<string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    char *str = (char*)s;
    int i = 0;

    while(str[i] && n != 0)
    {
        if(str[i] == c)
            return(&str[i]);
        i++;
        n--;
    }
    return(0);
}