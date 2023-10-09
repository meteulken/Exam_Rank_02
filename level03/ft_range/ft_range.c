#include <unistd.h>
#include <stdlib.h>

int ft_abs(int n)
{
    if(n < 0)
        return -n;
    else
        return n;
}

int     *ft_range(int start, int end)
{
    int i = 0;
    int *tab;

    tab = malloc(sizeof(int) * ft_abs(end - start) + 1);

    while(start >= end)
    {
        tab[i] = start;
        start--;
        i++;
    }
    while(start <= end)
    {
        tab[i] = start;
        start++;
        i++;
    }
    return tab;
}