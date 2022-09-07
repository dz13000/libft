#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    if(!dest || !src)
        return(dest);
    
    char *dest2;
    char *src2;
    size_t i;

    dest2 = (char *)dest;
    src2 = (char *)src;
    i = 0;

    if (dest2 < src2)
    {
        while(src2)
            *dest2++ = *src2++;
    }
    else
    {
        while(i++ < n)
             *dest2++ = *src2++;
    }
    return (dest);
}