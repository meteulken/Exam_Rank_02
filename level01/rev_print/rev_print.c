#include <unistd.h>

void rev_print(char *str)
{
    int i = 0;
    int j = 0;
    while (str[j])
        j++;
    j--;
    
    while(str[j] != 0)
    {
        write(1,&str[j],1);
        j--;
    }
}

int main(int argc, char *argv[])
{
    if(argc == 2)
        rev_print(argv[1]);
    write(1,"\n",1);
}