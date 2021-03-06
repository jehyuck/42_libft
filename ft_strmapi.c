#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    size_t  len;
    char    *rtn;

    if (s == 0 || f == 0)
        return (0);
    len = ft_strlen((char *)s);
    rtn = (char *)malloc(sizeof(char) * (len + 1));
    if (!rtn)
        return (0);
    i = 0;
    while (s[i])
    {
        rtn[i] = f(i, s[i]);
        i++;
    }
    rtn[i] = 0;
    return (rtn);
}