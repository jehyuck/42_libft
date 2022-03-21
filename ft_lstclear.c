#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;
    t_list *crt;

    crt = *lst;
    *lst = NULL;
    while (crt != NULL)
    {
        temp = crt->next;
        ft_lstdelone(crt, del);
        crt = temp;
    }
}