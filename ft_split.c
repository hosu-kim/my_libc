/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 00:24:23 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/26 00:24:23 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_counter(const char *s, char delimiter)
// (1) skips the delimiter.
// (2) skips to the end of a word.
{
	size_t	count;

	count = 0;
	if (!*s)
	{
		return (0);
	}
	while (*s)
	{
		while (*s == delimiter)
		{
			s++;
		}
		if (*s != delimiter)
		{
			count++;
			while (*s && *s != delimiter)
			{
				s++;
			}
		}
	}
	return (count);
}

void	free_memory(char **result, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(result[j]);
		j++;
	}
	free(result);
}

char	*allocate_word(const char *s, char delimiter)
{
	const char	*beginning_of_a_word;
	size_t		word_len;

	beginning_of_a_word = s;
	word_len = 0;
	while (*s && *s != delimiter)
	{
		word_len++;
		s++;
	}
	return (ft_substr(beginning_of_a_word, 0, word_len));
}

char	**split_and_allocate(char **result, const char *s, char delimiter)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == delimiter)
			s++;
		if (*s)
		{
			result[i] = allocate_word(s, delimiter);
			if (!result[i])
				return (NULL);
			i++;
			while (*s && *s != delimiter)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(const char *s, char delimiter)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((ft_word_counter(s, delimiter) + 1) * \
	sizeof(char *));
	if (!result)
		return (NULL);
	if (!split_and_allocate(result, s, delimiter))
	{
		free_memory(result, ft_word_counter(s, delimiter));
		return (NULL);
	}
	return (result);
}

// int main()
// {
//     char **store;
//     char *string = "Alpha|Bravo|Charlie";
//     int i;
//
//     i = 0;
//     store = ft_split(string, '|');
//     while (store[i])
//     {
//         printf("%s\n", store[i]);
//         i++;
//     }
//
//     return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_split.c ft_strlcpy.c ft_strlen.c