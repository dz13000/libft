#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *s1 = (char*)s;
    while(*s1)
    {
        if(*s1 == c)
            return(&*s1);
        s1++;
    }
    return(0);
}