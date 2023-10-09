#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc == 3)
    {
        int s1 = atoi(argv[1]);
        int s2 = atoi(argv[2]);

        if(s1 <= 0 || s2 <= 0)
            return 0;
        else
            {
                while(s2 != 0)
                {   int tmp = s2;
                    s2 = s1 % s2;
                    s1 = tmp;
                }
            }
        printf("%d",s1);
    }
    printf("\n");
}