/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:40:17 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 15:11:21 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t bytes_to_move)
// copies the characters to another block.
// and protects src_str from overlapping with if conditions
// in else, copying ends before dest_str overlapps src_str.
{
	char		*to_str;
	const char	*from_str;

	if (bytes_to_move == 0 || dest_str == src_str)
		return (dest_str);
	to_str = (char *)dest_str;
	from_str = (const char *)src_str;
	if (to_str < from_str)
	{
		while (bytes_to_move--)
		{
			*to_str++ = *from_str++;
		}
	}
	else
	{
		to_str += bytes_to_move;
		from_str += bytes_to_move;
		while (bytes_to_move--)
		{
			*(--to_str) = *(--from_str);
		}
	}
	return (dest_str);
}

// int	main()
// {
// 	char *source = "I don't you at all.";
// 	char destination[30];
//
// 	ft_memmove(destination, source, 13);
// 	printf("%s\n", destination);
//
// 	return (0);
// }
//