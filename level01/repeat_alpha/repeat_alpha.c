#include <unistd.h>

void repeat_alpha(char *str)
{
    int i = 0;
    int l = 0;

    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            l = str[i] - 96;
            while(l--)
                write(1,&str[i],1);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            l = str[i] - 64;
            while(l--)
                write(1,&str[i],1);
        }
        else
            write(1,&str[i],1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if(argc == 2)
        repeat_alpha(argv[1]);
    write(1,"\n",1);
}