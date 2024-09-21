/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:58:20 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 17:16:42 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char *s, int c)
{
	char ch =  (char)c;

	while(*s != '\0')
	{
		if (*s == ch)
		{
			return (char *)s;
		}
		s++;
	}
	if (*s == ch)
	{
		return (char *)s;
	}
	return(NULL);
}