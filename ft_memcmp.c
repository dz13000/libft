#include "libft.h"
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *str = (char*)s1;
    char *str2 = (char*)s2;
    int i = 0;

    while(str[i] && str2[i] && str[i] == str2[i] && n != 0)
    {
        i++;
        n--;
    }
    return(str[i] - str2[i]);
}