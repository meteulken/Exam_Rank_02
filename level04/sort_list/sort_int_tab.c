#include <unistd.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap
    t_list	*tmp;

    tmp = lst;

    while(lst->next != NULL)
    {
        if(((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->data->next;
            lst->data->next = swap;
            lst = tmp;
        }
        else 
            lst = lst->next;
    }
    lst = tmp;
    return lst;



}