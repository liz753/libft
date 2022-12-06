#include "libft.h"

/* The memset() function writes len bytes of value c (converted to an
unsigned char) to the string b. */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (b == NULL)
		return (0);
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}
