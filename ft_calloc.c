#include "libft.h"

void *ft_calloc(size_t nelem, size_t elsize)
{
    void *temp;

    temp = malloc(nelem * elsize);

    if (!(temp))
        return (NULL);
    
    ft_bzero(temp, (nelem * elsize));
    return (temp);
}