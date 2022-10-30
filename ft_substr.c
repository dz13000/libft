#include <stdlib.h>
#include "libft.h"

int ft_strlen2(char const *s)
{
    unsigned int i;
    while(s[i])
        i++;
    return(i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    int i = 0;
    int j = 0;

    str = malloc(sizeof(char*) * len + 1);
    if(!str)
        return(NULL);
    if(start > ft_strlen2(s))
        return(NULL);
    while(i < start && s[i])
        i++;
    while(j <= len && s[i])
    {
        str[j] = s[i];
        j++;
        i++;
    }
    str[j] = '\0';
    return(str);
}
#include <stdio.h>

int main()
{
    printf("%s", ft_substr("jesuisunalgerien", 0, 18));
}