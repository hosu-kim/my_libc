/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:17:49 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 17:25:48 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char ch =  (char)c;
	const char *last_occur = NULL;

	while(*s != '\0')
	{
		if (*s == ch)
		{
			last_occur = s;
		}
		s++;
	}
	if (*s == ch)
	{
		return (char *)s;
	}
	return((char *)last_occur));
}