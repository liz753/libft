#include "libft.h"

/* The isalnum() function tests for any character for which isalpha(3) or
isdigit(3) is true. */

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
