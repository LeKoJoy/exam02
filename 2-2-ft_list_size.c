#include "ft_list.h"
#include <unistd.h>

int	ft_list_size(t_list *begin_list)
{
    t_list *list = begin_list;
    int len = 0;
    while(list->next != NULL)
    {
        len++;
        list = list->next;
    }
    return len;
}