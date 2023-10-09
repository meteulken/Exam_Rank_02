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
int main()
{
    int i = 0;
    char string[] = "hello world mete";
    char **huhu = ft_split(string);
    while(i < 4)
    {
        printf("%s ",huhu[i]);
        i++;
    }
}