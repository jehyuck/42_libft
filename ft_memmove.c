#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t i;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (d < s)
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    else
        while (i < n)
        {
            d[n - 1 - i] = s[n - 1 - i];
            i++;
        }
    return (dest);
}