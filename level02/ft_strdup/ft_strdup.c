#include <unistd.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *dest;

    while(src[len])
        len++;
    len--;

    dest = malloc(sizeof(char) * len);

    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}