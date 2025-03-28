#include "libft.h"

int	ft_isprint(int c)
// checks if the provided integer is printable in ascii code.
// True: 1, False: 0
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}

// printable characters: 
// all num and alphabets and special characer in ascii.
//
// int main()
// {
// 	char is_printable_1;
// 	char is_printable_2;
// 	char is_printable_3;
//
// 	is_printable_1 = 48;
// 	is_printable_2 = 0;
// 	is_printable_3 = 68;
//
// 	printf("%d\n", ft_isprint(is_printable_1));
// 	printf("%d\n", ft_isprint(is_printable_2));
// 	printf("%d\n", ft_isprint(is_printable_3));
//
// 	return (0);
// }