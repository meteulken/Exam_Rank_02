int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while(str[i] <= 32)
        i++;
    if(str[i] == '+')
        i++;
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