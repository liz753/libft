#include "libft.h"

/* The tolower() function converts an upper-case letter to the corresponding
lower-case letter. */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
