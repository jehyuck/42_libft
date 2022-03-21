#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *rtn;

    rtn = (t_list *)malloc(sizeof(t_list));
    if (rtn == 0)
        return (0);
    rtn->content = content;
    return (rtn);
}