#include "libft.h"

/* The putendl_fd() function outputs the string āsā 
to the given file descriptor followed by a newline. */

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
