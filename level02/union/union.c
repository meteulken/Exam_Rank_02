#include <unistd.h>

int check1(char *str,char c,int i)
{
    int k = 0;
    while(k < i)
    {
        if(str[k] == c)
            return 0;
        k++;
    }
    return 1;
}

int check2(char *str,char c)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return 0;
        i++;
    }
    return 1;
}
int main(int argc, char *argv[])
{
    int i = 0;

    while(argv[1][i])
    {
        if(check1(argv[1],argv[1][i],i))
            write(1,&argv[1][i],1);
        i++;
    }
    i = 0;
    while(argv[2][i])
    {
        if(check2(argv[1],argv[2][i]))
        {
            if(check1(argv[2],argv[2][i],i))
                write(1,&argv[2][i],1);
        }
        i++;
    }
}