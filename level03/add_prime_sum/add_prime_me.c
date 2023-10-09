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

int prime(int n)
{
    int i = 2;
    while(i < n)
    {
        if(n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void ft_putnbr(int n)
{
    if(n > 9)
        ft_putnbr(n / 10);
    write(1,&"0123456789"[n % 10],1);
}

int main(int argc, char *argv[])
{
    int s = 0;
    if(argc == 2)
    {
        int i = 2;
        int nbr = ft_atoi(argv[1]);

        while(i <= nbr)
        {
            if(prime(i))
                s = s + i;
            i++;
        }
    }
    ft_putnbr(s);   
}