#include <unistd.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char tmp;

    while(str[j])
        j++;
    j--;

    while(i < j)
    {
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
        i++;
        j--;
    }
    return str;

}
#include <stdio.h>

int main()
{
    char str[] = "hello world";
    printf("%s",ft_strrev(str));
}