#include "libft.h"

/* The isdigit() function tests for a decimal digit character. */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
