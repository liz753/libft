#include "libft.h"

/* The lstadd_back() function adds the node ’new’ at the end of the list. */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (*lst != NULL)
	{
		t = ft_lstlast(*lst);
		t->next = new;
	}
	else
		*lst = new;
}
