/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:05:08 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 18:14:22 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int character, size_t limit_bytes)
// scans the first occurence of a specific character.
// returns the location of the character.
{
	const unsigned char	*ptr = (const unsigned char *)s;
	size_t				index;

	index = 0;
	while (index < limit_bytes)
	{
		if (ptr[index] == (unsigned char)character)
		{
			return ((void *)(ptr + index));
		}
		index++;
	}
	return (NULL);
}

// int main()
// {
// 	char *string = "Ugh, dead line is coming.";
// 	char c;
// 	char *result;
//
// 	c = 'l';
// 	result = ft_memchr(string, c, 20);
// 	if (result != NULL)
//     {
//         printf("Found character '%c' at position: %ld\n", 
// 		c, result - string);
//     }
// 	else
// 	{
// 		printf("Nothing found.");
// 	}
// 	return (0);
// }
//
// cc -Wall -Werror -Wextra ft_memchr.c
