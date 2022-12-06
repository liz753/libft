#include "libft.h"

/* The bzero() function copies n bytes (b), 
each with a value of zero, into string s */

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (n > 0)
	{
		((char *)s)[i] = 0;
		i++;
		n--;
	}
}
