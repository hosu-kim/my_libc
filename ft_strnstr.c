/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:24:33 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 19:06:23 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t temp;
	
	i = 0;
	if (*little == '\0')
	{
		return ((char *)big);	
	}
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			temp = 0;
			while ( i + temp < len && little[temp] != '\0' && big[i + temp] == little[temp])
			{
				if (little[temp + 1] == '\0')
				{
					return (char *)&big[i];
				}
				temp++;
			}
		}
		i++;
	}
	return (NULL);
}

int main() {
    const char *big = "Hello, world!";
    const char *little = "world";
    char *result = ft_strnstr(big, little, 12);

    if (result != NULL) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}