#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
// prints a number in the terminal.
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == -2147483648)
	{
		ft_putchar_fd('2', fd);
		n = -(n % 1000000000);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
// int main()
// {
// 	int a_number;
//
// 	a_number = -123456789;
// 	ft_putnbr_fd(a_number, 1);
// 	printf("\n");
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_putnbr_fd.c ft_itoa.c