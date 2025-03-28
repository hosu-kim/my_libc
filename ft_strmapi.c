#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// string mapping
// sends each element to the provided function
// and returns a char pointer.
{
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
	{
		return (NULL);
	}
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	to_uppercase(unsigned int index, char c)
{
	(void)index;
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// int main()
// {
// 	char *string = "unlock the code";
// 	char *new_string;
//
// 	new_string = ft_strmapi(string, to_uppercase);
// 	printf("%s\n", new_string);
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_strmapi.c ft_strlen.c