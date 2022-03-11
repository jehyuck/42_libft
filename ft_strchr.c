#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *s_temp;

    s_temp = s;
    while (1)
    {
        if (*s_temp == c)
            return (s_temp);
        if (*s_temp == '\0')
            break;
        s_temp++;
    }
    return (0);
}