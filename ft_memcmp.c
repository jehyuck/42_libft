#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    char    *s1_temp;
    char    *s2_temp;
    size_t  i;

    i = 0;
    s1_temp = (char *)s1;
    s2_temp = (char *)s2;
    while (i < n)
    {
        if (s1_temp[i] != s2_temp[i])
            return s1_temp[i] - s2_temp[i];
    }
    return s1_temp[i] - s2_temp[i];
}