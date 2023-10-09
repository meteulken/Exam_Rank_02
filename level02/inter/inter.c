#include <unistd.h>

int check(char *str,char c,int i)
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

void inter(char *s1,char *s2)
{
    int i = 0;
    int j = 0;

    while(s1[i])
    {
        j=0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
            {
                if(check(s1,s1[i],i))
                {
                    write(1,&s1[i],1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    if(argc == 3)
        inter(argv[1],argv[2]);
    write(1,"\n",1);
}