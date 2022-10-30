#include <stdio.h>
#include <stdlib.h>

int ft_strlen2(char const *s)
{
    unsigned int i;
    while(s[i])
        i++;
    return(i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int j = 0;
    int i = 0;
    int k = 0;

    str = malloc(sizeof(char*) * (ft_strlen2(s1) + ft_strlen2(s2) + 1));
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[k] = s1[i];
        i++;
        k++;
    }
    while (s2[j])
    {
        str[k] = s2[j];
        j++;
        k++;
    }
    str[k] = '\0';
    return (str);
}

int main()
{
    printf("%s", ft_strjoin("jesuis","unalgerien" ));
}