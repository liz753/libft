#include "libft.h"

/* The toupper() function converts a lower-case letter to the corresponding
upper-case letter.  */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
