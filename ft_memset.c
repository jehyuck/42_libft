#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char    *temp;
    int     i;

    i = 0;
    temp = (unsigned char *)s;
    while (i < n)
    {
        temp[i] = c;
        i++;
    }
    return (s);
}