/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:17:49 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 17:25:48 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
// finds the last occurence of the char in s.
// and return the address of the same char as c
{
	char		ch;
	const char	*last_occur;

	ch = (char)c;
	last_occur = NULL;
	while (*s != '\0')
	{
		if (*s == ch)
		{
			last_occur = s;
		}
		s++;
	}
	if (ch == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last_occur);
}

// int main()
// {
//     const char *str = "There are still some spaces available.";
//     char ch = 'a';
//     char *result = ft_strrchr(str, ch);
//
//     if (result != NULL)
//     {
//         printf("Found last occurrence of '%c': %s\n", ch, result);
// 	}
//     else
//     {
//         printf("Character '%c' not found\n", ch);
//     }
//
//     return 0;
// }
//
// // cc -Wall -Werror -Wextra ft_strrchr.c