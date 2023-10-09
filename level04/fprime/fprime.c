#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 2;

    if(argc == 2)
    {
        int nbr = atoi(argv[1]);

        while(i <= nbr)
        {
            if(nbr % i == 0)
            {
                nbr = nbr / i;
                printf("%d",i);
                if(i < nbr)
                    printf("*");
                i--;
            }
            i++;
        }
    }
    printf("\n");
}