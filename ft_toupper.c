#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	return (c);
}

// int main()
// {
// 	char cha;
//	
// 	cha = 'c'; // Modify me
// 	ft_toupper(cha);
// 	printf("%c\n", cha);
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_toupper.c