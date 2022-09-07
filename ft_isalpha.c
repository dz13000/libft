#include "libft.h"

int ft_isalpha(int nb)
{
    if(nb >= 65 && nb <= 90 || nb >= 97 && nb <= 122)
        return(1);
    return(0);
}