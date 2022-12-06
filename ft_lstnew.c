#include "libft.h"

/* The lstnew() function allocates (with malloc(3)) and returns a new node. 
The member variable ’content’ is initialized with the value of the 
parameter ’content’. The variable ’next’ is initialized to NULL. */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
