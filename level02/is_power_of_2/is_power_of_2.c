#include <unistd.h>

int  is_power_of_2(unsigned int n)
{
    int i = 2;

    while(i <= n)
    {
        if(n % 2 == 0)
            n = n / 2;
        else
            return 0;
    }
    return 1;
}