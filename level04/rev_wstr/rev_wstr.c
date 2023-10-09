#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int x;
    char **tab;

    tab = (char**)malloc(sizeof(tab) * 1000);

    while(str[i] == ' ')
        i++;

    while(str[i])
    {
       
        if(str[i] > 32)
        {
            x = 0;
            tab[j] = (char*)malloc(sizeof(char) * 1000);
            while (str[i] > 32)
            {
                tab[j][x] = str[i];
                i++;
                x++;
            }
            tab[j][x] = '\0';
            j++;
        }
        else
            i++;
    }
    tab[j] = 0;
    return tab;
}

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}
int main(int argc, char *argv[])
{
    int i = 0;
    if(argc == 2)
    {
        char **tab = ft_split(argv[1]);
        while(tab[i])
            i++;
        i--;
        while(i >= 0)
        {
            ft_putstr(tab[i]);
            if(i > 0)
                write(1," ",1);
            i--;
        }
    }
    write(1,"\n",1);
}