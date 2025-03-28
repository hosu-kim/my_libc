#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
// prints the provided string one char by one char
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// int main()
// {
// 	char	*string = "I'm a string.\n";
// 	ft_putstr_fd(string, 1);
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_putstr_fd.c