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

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr = (const unsigned char *)s;
	size_t i;

	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)(ptr + i);
		}
	}
	return (NULL);
}