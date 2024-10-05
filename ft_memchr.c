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

void *ft_memchr(const void *s, int character, size_t limit_bytes)
// scans the first occourence of a specific character.
{
	const unsigned char *ptr = (const unsigned char *)s;
	size_t count;

	count = 0;
	while (count < limit_bytes)
	{
		if (ptr[count] == (unsigned char)character)
		{
			return (void *)(ptr + count);
		}
		count++;
	}
	return (NULL);
}