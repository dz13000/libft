#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    void *cal;

    cal = malloc(count * size);
    if(!cal)
        return(0);
    ft_bzero(cal, count * size);
    return(cal);
}