#include "libft.h"

/* The lstadd_front() function adds the node (element) ’new’ 
at the beginning of the list. */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL | new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
