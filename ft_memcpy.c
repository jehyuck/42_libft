#include "libft.h"

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t  i;
    char    *dst_temp;
    char    *src_temp;

    i = 0;
    dst_temp = dest;
    src_temp = src;
    while(i < n)
    {
        dst_temp[i] = src_temp[i];
        i++;
    }
    return (dest);
}  