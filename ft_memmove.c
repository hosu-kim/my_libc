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

void *ft_memmove(void *dest_str, const void *src_str, size_t bytes_to_move)
// copies the characters to another block.
// and protects src_str from overlapping with if conditions
// in else, copies only non-overlapping addressses.
{
	char *to_str;
	const char *from_str;
	size_t increase;
	
	to_str = (char *)dest_str;
	from_str = (const char *)src_str;
	increase = 0;
	
	if (to_str == from_str) 
	{
		return(to_str);
	}

	if (to_str < from_str)
	{
		while (increase < bytes_to_move)
		{
			to_str[increase] = from_str[increase];
			increase++;
		}
	}
	else
	{
		increase = bytes_to_move;
		while (increase > 0)
		{
			to_str[increase - 1] = from_str[increase - 1];
			increase--;
		}
	}
	return (dest_str);
}