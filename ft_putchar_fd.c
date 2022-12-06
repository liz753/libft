#include "libft.h"

/* The putchar_fd() function outputs the character 'c' to 
the given file descriptor. */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
