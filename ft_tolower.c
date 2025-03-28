#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}

// int main()
// {
// 	char cha;
//	
// 	cha = 'C'; // Modify me
// 	ft_tolower(cha);
// 	printf("%c\n", cha);
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_tolower.c
//