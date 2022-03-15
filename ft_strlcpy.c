#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t src_len;
    size_t i;

    src_len = ft_strlen((char *)src);
    i = 0;
    if(size == 0)
        return (src_len);
    while (src[i] && i + 1 < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return (src_len);
}