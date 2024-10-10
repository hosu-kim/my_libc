/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:04:13 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 15:52:42 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t bytes_to_copy)
// void takes all data types.
// copies the characters to another block.
{
	char		*to_str;
	const char	*from_str;
	size_t		index;

	to_str = dest_str;
	from_str = (const char *)src_str;
	index = 0;
	if (to_str == from_str)
	{
		return (to_str);
	}
	while (index < bytes_to_copy)
	{
		to_str[index] = from_str[index];
		index++;
	}
	return (to_str);
}

// int main()
// {
// 	char *from = "Not today, maybe tomorrow.";
// 	char to[30];
//
// 	ft_memcpy(to, from, 25);
//
// 	printf("%s\n", to);
// 	return (0);
// }
