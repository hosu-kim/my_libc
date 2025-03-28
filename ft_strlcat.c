#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t total_dest_size)
// concatenates scr to dest and then returns the total length of dest;
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (total_dest_size == 0)
	{
		return (src_len);
	}
	if (total_dest_size <= dest_len)
	{
		return (total_dest_size + src_len);
	}
	else
	{
		while (src[i] != '\0' && i + 1 < total_dest_size - dest_len)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		return (dest_len + src_len);
	}
}

// int main() {
//     char dest[20] = "To je";
//     const char *src = " Škoda.";
//     size_t result;
//
//     result = ft_strlcat(dest, src, 30);
//     printf("Resulting string: %s\n", dest);
//     printf("Total length: %zu\n", result);
//
//     return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_strlcat.c ft_strlen.c