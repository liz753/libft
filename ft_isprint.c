#include "libft.h"

/* The isprint() function tests for any printing character. */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
