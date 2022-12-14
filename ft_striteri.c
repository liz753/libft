#include "libft.h"

/* The striteri() function applies the function âfâ on each character of 
the string passed as argument, passing its index as first argument. 
Each character is passed by address to âfâ to be modified if necessary. */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
