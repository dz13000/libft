#include "libft.h"
#include <stdlib.h>

int     ft_len(const char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

char    *ft_strdup(const char *str)
{
    int i = 0;
    char *dup;

    dup = malloc(sizeof(char*) * ft_len(str) + 1);
    if(!dup)
        return(0);
    while(str[i])
    {
        dup[i] = str[i];
        i++;
    }
    return(dup);
}