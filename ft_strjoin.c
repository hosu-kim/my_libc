#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_str;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * \
	(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (*s1)
	{
		new_str[i++] = *s1++;
	}
	while (*s2)
		new_str[i++] = *s2++;
	new_str[i] = '\0';
	return (new_str);
}

// int main()
// {
//     char *string_1 = "42 Prague";
//     char *string_2 = "42 Seoul";
//     char *together;
//
//     together = ft_strjoin(string_1, string_2);
//     printf("%s\n", together);
//
//     return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_strjoin.c ft_strlen.c