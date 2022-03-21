#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    if (*lst == NULL && new != NULL)
    {
        *lst = new;
        return ;
    }
    else if (lst == NULL || new == NULL)
        return ;
    temp = *lst;
    while ((*lst)->next != NULL)
        (*lst) = (*lst)->next;
    (*lst)->next = new;
    *lst = temp;
}
