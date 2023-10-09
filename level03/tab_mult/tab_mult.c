#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}

void ft_putnbr(int n)
{
    if(n > 9)
        ft_putnbr(n / 10);
    write(1,&"0123456789"[n % 10],1);
}

int main(int argc, char *argv[])
{
    int i = 1;

    if(argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1," x ",3);
            ft_putnbr(nbr);
            write(1," = ",3);
            ft_putnbr(nbr * i);
            if(i < 9)
                write(1,"\n",1);
            i++;
        }
    }
    write(1,"\n",1);
}