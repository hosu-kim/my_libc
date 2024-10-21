/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:59:42 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/18 18:21:44 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, const char *set)
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
	char	*trimmed;
	int		start;
	int		end;
	int		index;

	index = 0;
	start = 0;
	if (s1 == 0 || set_to_remove == 0)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_is_in_set(s1[start], set_to_remove))
		start++;
	while (end > start && ft_is_in_set(s1[end - 1], set_to_remove))
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	while (start < end)
		trimmed[index++] = s1[start++];
	trimmed[index] = '\0';
	return (trimmed);
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
