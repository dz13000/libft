#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *dest2;
    char *src2;
    if(!dest || !src)
        return(dest);
    dest2 = (char *)dest;
    src2 = (char *)src;

    while(n--)
        *dest2++ = *src2++;
    return(dest);
}