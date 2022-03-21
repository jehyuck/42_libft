#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *rtn;
    t_list *temp;

    if (lst == NULL || f == NULL)
        return (NULL);
    rtn = NULL;
    while (lst)
    {
        temp = ft_lstnew((*f)(lst->content));
        if (!temp)
        {
            ft_lstclear(&rtn, del);
            return (0);
        }
        ft_lstadd_back(&rtn, temp);
        temp = temp->next;
        lst = lst->next;
    }    
    return (rtn);
}