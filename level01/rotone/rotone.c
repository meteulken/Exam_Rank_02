#include <unistd.h>

void rotone(char *str)
{
    int i = 0;

     while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
        {
            str[i] += 1;
        }
        else if(str[i] == 'n' || str[i] == 'z')
        {
            str[i] -= 25;
        }
        write(1,&str[i],1);
        i++;

    }
}

int main(int argc ,char *argv[])
{
    if(argc == 2)
        rotone(argv[1]);
    write(1,"\n",1);
}