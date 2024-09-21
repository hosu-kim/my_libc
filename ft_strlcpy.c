/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:12:07 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 15:56:18 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	
	i = 0;
	if (size == 0)
	{
		return(strlen(src));
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return(strlen(src));
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "heelo";
// 	char str2[50];
// 	size_t len;

// 	len = ft_strlcpy(str2, str, sizeof(str2));

// 	printf("%s\n", str2);
// 	printf("%zu\n", len);
// 	return(0);
// }