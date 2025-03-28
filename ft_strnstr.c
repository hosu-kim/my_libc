#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t up_to)
// finds little in big up to the provided number.
// (1) returns big if little is a empty string.
// (2) returns the start address of the same as little in big if found.
// (3) returns NULL if not found.
{
	size_t	big_index;
	size_t	little_index;

	if (*little == '\0')
		return ((char *)big);
	big_index = 0;
	while (big_index < up_to && big[big_index] != '\0')
	{
		if (big[big_index] == little[0])
		{
			little_index = 0;
			while (big_index + little_index < up_to && \
					little[little_index] != '\0' && \
					big[big_index + little_index] == little[little_index])
			{
				if (little[little_index + 1] == '\0')
					return ((char *)&big[big_index]);
				little_index++;
			}
		}
		big_index++;
	}
	return (NULL);
}

// int main() {
//     const char *big = "Hello, world!";
//     const char *little = "world";
//     char *result = ft_strnstr(big, little, 12);
//
//     if (result != NULL)
// 	{
//         printf("Found: %s\n", result);
//     } 
// 	else 
// 	{
//         printf("Not found\n");
//     }
//
//     return (0);
// }
//
// cc -Wall -Werror -Wextra ft_strnstr.c