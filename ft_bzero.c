#include "libft.h"

void	ft_bzero(void *s, size_t n)
// sets memory blocks to 0; old function.
// converts data type to char to handle by 1 byte.
// Because void can't be modified.
{
	char	*ptr;

	ptr = s;
	while (0 < n)
	{
		ptr[--n] = 0;
	}
}

// int main()
// {
//     char string[20] = "Today is Sunday.\n";
//
//     printf("Before: \n");
//     printf("%s\n", string);
//
//     ft_bzero(string, 5);
//
//     printf("After: \n");
// 	printf("%s\n", string);
// 	return (0);
// }
// // cc -Wall -Werror -Wextra ft_bzero.c