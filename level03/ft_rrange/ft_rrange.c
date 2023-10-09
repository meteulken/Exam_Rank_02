#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_abs(int n)
{
    if(n < 0)
        return -n;
    else
        return n;
}

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *tab = malloc(sizeof(int) * ft_abs(end - start) + 1);

    while(start < end)
    {
        tab[i] = end;
        end--;
        i++;
    }
    tab[i] = end;
    while(start > end)
    {
        tab[i] = end;
        end++;
        i++;
    }
    tab[i] = end;
    return tab;
}
int main()
{
    int i = 0;
    int *str = ft_rrange(0,-3);
    while(i <= ft_abs(5))
    {
        printf("%d ", str[i]);
        i++;
    }
}