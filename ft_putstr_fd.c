#include "libft.h"

/* The putstr_fd() function outputs the string āsā to 
the given file descriptor. */

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
