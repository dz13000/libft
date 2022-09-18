#include <stdlib.h>

int nbr_len(int nbr)
{
    int i = 1;
    if(nbr < 0)
    {
        nbr = -nbr;
        i++;
    }
    while(nbr > 9)
    {
        nbr /= 10;
        i++;
    }
    return(i);
}

int div_len(int len)
{
    int i = 1;
    if(len == 1)
        return(1);
    while(len > 1)
    {
        i *= 10;
        len--;
    }
    return(i);
}

char *ft_itoa(int n)
{
    int i = 0;
    int len = nbr_len(n);
    int len2 = len;
    char *res;

    res = malloc(sizeof(char*) * len + 1);
    if(!res)
        return(NULL);
    if(n == -2147483648)
        return("-2147483648");
    if(n < 0)
    {
        n = -n;
        res[i] = '-';
        i++;
        len--;
    }
    while (i < len2)
    {
        res[i] = (n / div_len(len) % 10) + '0';
        i++;
        len--;
    }
    res[i] = '\0';
    return(res);
}
#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%s", ft_itoa(atoi(av[1])));
}