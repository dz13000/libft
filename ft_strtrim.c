#include <stdlib.h>
#include "libft.h"

int ft_check(char c, char const *set)
{
    int i = 0;
    while(set[i])
    {
        if(set[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int ft_s1(char const *s1, char const *set)
{
    int i = 0;
    int j = 0;
    while(s1[i])
    {
        if(ft_check(s1[i], set) == 0)
        {
            j++;
        }
        i++;
    }
    return(j);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *cpy;
    int i = 0;
    int j = 0;
    cpy = malloc(sizeof(char*) * ft_s1(s1, set) + 1);
    if(!cpy)
        return(NULL);
    while(s1[i])
    {
        if(ft_check(s1[i], set) == 0)
        {
            cpy[j] = s1[i];
            j++;
        }
        i++;
    }
    cpy[j] = '\0';
    return(cpy);   
}

#include <stdio.h>
int main()
{
    printf("%s\n", ft_strtrim("je//suis2un,algerien", "2,"));
}