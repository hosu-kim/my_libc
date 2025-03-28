#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t bytes_to_copy)
// copies src to dest according to the provided bytes_to_copy
// and returns the length of the source.
{
	size_t	i;

	i = 0;
	if (bytes_to_copy == 0)
	{
		return (ft_strlen(src));
	}
	while (i < bytes_to_copy - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
// 	char str[] = "heelo";
// 	char str2[50];
// 	size_t len;
//
// 	len = ft_strlcpy(str2, str, 5);
//
// 	printf("%s\n", str2);
// 	printf("%zu\n", len);
// 	return(0);
// }
//
// // cc -Wall -Werror -Wextra ft_strlcpy.c ft_strlen.c