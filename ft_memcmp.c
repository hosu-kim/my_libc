/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:14:41 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 18:19:57 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t limit_bytes)
// compares two strings in the memory blocks if finds a different characters,
// substracts the values of str1[i] from str2[i]
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < limit_bytes)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *string_1 = "When you were 'h'ere before.";
// 	char *string_2 = "When you were 'H'ere before.";
// 	int result;
//
// 	result = ft_memcmp(string_1, string_2, 26);
// 	printf("%d", result); // h: 104 H: 72
// 	return (0);
// }