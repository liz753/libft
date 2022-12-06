#include "libft.h"

/* The lstiter() function iterates the list ’lst’ and 
applies the function ’f’ on the content of each node. */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
