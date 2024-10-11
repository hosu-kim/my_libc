/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:59:42 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/24 23:59:42 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
// True: 1, False: 0
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set_to_remove)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed_str;

	if (!s1 || !set_to_remove || *s1 == '\0')
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && is_in_set(s1[start], set_to_remove))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set_to_remove))
		end--;
	len = end - start;
	trimmed_str = (char *)malloc(len + 1);
	if (!trimmed_str)
		return (NULL);
	strncpy(trimmed_str, s1 + start, len);
	trimmed_str[len] = '\0';
	return (trimmed_str);
}

// int  main()
// {
//     const char *string = "Power up your brain.";
//     const char *set = "Power up ";
//     char *trimmed = ft_strtrim(string, set);
//
//     printf("%s\n", trimmed);
//
//     return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_strtrim.c ft_strlen.c