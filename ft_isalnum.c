#include "libft.h"

int ft_isalnum(int nb)
{
    if((nb >= 49 && nb <= 57) || (nb >= 65 && nb <= 90)  || (nb >= 97 && nb <= 122))
        return(1);
    return (0);
}

