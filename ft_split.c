#include <stdlib.h>
#include "libft.h"

int ft_strtab(const char *str, char sep)
{
    int i = 0;
    int j = 0;
    while(str[i])
    {
        if(str[i] == sep)
            j++;
        i++;
    }
    return(j);
}

int ft_slen(const char *str, char sep)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == sep)
            break;
        i++;
    }
    return(i);
}

char **ft_split(char const *s)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab;

    tab = malloc(sizeof(char**) * 1000);
    while((s[i]) && (s[i] == '\n' || s[i] == '\t' || s[1] == ' '))
        i++;
    while(s[i])
    {
        if(s[i] > 32)
        {
            tab[j] = malloc(sizeof(char*) * 1000);
            while((s[i]) && (s[i] != '\n' && s[i] != '\t' && s[1] != 32))
            {
                tab[j][k] = s[i];
                i++;
                k++;
            }
            tab[j][k] = '\0';
            k = 0;
            j++;
        }
        else
            i++;
    }
    tab[j] = 0;
    return(tab);
}

#include <stdio.h>
int main(int ac, char **av)
{
    char **tab;
    (void)ac;
    tab = ft_split(av[1]);
    int i = 0;
    while(tab[i])
    {
        printf("%s\n", tab[i++]);
    }
}