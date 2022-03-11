#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t i;

    i = 0;
    d = dest;
    s = src;
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