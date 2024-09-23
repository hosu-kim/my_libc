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

void *ft_memmove(void *dest_str, const void *src_str, size_t n_bytes)
{
	char *to_str;
	const char *from_str;
	size_t i;
	
	to_str = (char *)dest_str;
	from_str = (const char *)src_str;
	i = 0;
	
	if (to_str == from_str) 
	{
		return(to_str);
	}
	if (to_str < from_str)
	{
		while (i < n_bytes)
		{
			to_str[i] = from_str[i];
			i++;
		}
	}
	else
	{
		i = n_bytes;
		while (i > 0)
		{
			to_str[i - 1] = from_str[i - 1];
			i--;
		}
	}
	return (dest_str);
}