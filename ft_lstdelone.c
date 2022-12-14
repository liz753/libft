#include "libft.h"

/* The lstdelone() function takes as a parameter a node and frees the memory 
of the node’s content using the function ’del’ given as a parameter 
and free the node. The memory of ’next’ must not be freed. */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	if (del != NULL)
		(del)(lst->content);
	free(lst);
}
