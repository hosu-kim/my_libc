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

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	
	i = 0;
	
	if (n == 0)
	{
		return(0);
	}
	while(i < n) // when there's a different character or null terminator.
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return (unsigned char)s1[i] - (unsigned char)s2[i];
		}
		i++;
	}
	return(0); // every chracter is the same
}