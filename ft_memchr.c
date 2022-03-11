#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *s_temp;

    i = 0;
    s_temp = (unsigned char*)s;
    while (i < n)
    {
        if (s_temp[i] == c)
            return (&s_temp[i]);
        i++;
    }
    return (NULL);
}