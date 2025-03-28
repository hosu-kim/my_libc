#include "libft.h"

void	ft_putchar_fd(char c, int fd)
// file descriptor: 0(input), 1(output), 2(error output)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	char character;
//
// 	ft_putchar_fd('A', 1);
// 	printf("\n");
// 	return (0);
// }
//