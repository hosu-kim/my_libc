/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:35:11 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 18:03:57 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t up_to_n)
// if there's a different char or one of them is shorter,
// returns a number which subtracts s2[i] from s1[i].
// if they are the same, returns 0.
{
	size_t	i;

	i = 0;
	if (up_to_n == 0)
	{
		return (0);
	}
	while (i < up_to_n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *string_1 = "Dobry den. (d=100)";
// 	char *string_2 = "Dobry vecer. (v=118)";
//
// 	printf("%d", ft_strncmp(string_1, string_2, 7));
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_strncmp.c