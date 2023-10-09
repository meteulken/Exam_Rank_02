#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}

void ft_putnbr(int n)
{
    if(n > 15)
        ft_putnbr(n / 16);
    write(1,&"0123456789abcdef"[n % 16],1);
}
int main(int argc, char *argv[])
{
    int i = 0;

    if(argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        ft_putnbr(nbr);
    }
    write(1,"\n",1);
}