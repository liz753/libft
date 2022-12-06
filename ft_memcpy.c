#include "libft.h"

/* The memcpy() function copies n bytes from memory area src to memory 
area dst. If dst and src overlap, behavior is undefined. */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
