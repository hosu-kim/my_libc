/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:53:15 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 16:45:38 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;
	size_t = i;
	
	dest_len = ft_strlen(dest);
	src_len = strlen(src);
	i = 0;
	
	if (size == 0)
	{
		return (src_len);
	}
	if (size < dest_len)
	{
		return (size + src_len);
	}
	else
	{
		while (src[i] != '\0' && i + 1 < size - dest_len)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		return (dest_len = src_len);
	}
}