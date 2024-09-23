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

void *memcpy(void *dest_str, const void *src_str, size_t n)
{
	char *to_str;
	const char *from_str;
	size_t i;

	to_str = dest_str;
	from_str = (const char *)src_str;
	i = 0;
	if (to_str == from_str)
	{
		return(to_str);
	}
	while (i < n)
	{
		to_str[i] = from_str[i];
		i++;
	}
	return(dest_str);
}