/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:26:46 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/28 16:17:42 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_str;
	unsigned int i;

	if (!s || !f) // allocation failure on s or f
	{
		return (NULL);
	}
	
	new_str = (char *)malloc(sizeof(char) * (strlen(s) + 1));
	if (!new_str)
	{
		return (NULL);
	}

	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}

	new_str[i] = '\0';

	return (new_str);
}