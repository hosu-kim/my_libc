#include "libft.h"

char	*ft_strchr(const char *s, int c)
// finds the provided char in the string
{
	char	ch;

	ch = (char)c;
	while (*s != '\0')
	{
		if (*s == ch)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == ch)
	{
		return ((char *)s);
	}
	return (NULL);
}

// int main ()
// {
// 	char *string = "Press here to open.";

// 	printf("%s\n", ft_strchr(string, 'o'));

// 	return (0);
// }
// 
// // cc -Wall -Werror -Wextra ft_strchr.c