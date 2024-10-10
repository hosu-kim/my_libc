/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:09:51 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 13:53:18 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int char_to_fill, size_t bytes_to_set)
// sets memory blocks to the provided number; similar with bzero.
{
	char	*temp_ptr;
	size_t	index;

	temp_ptr = ptr;
	index = 0;
	while (index < bytes_to_set)
		temp_ptr[index++] = char_to_fill;
	return (ptr);
}

// int main()
// {
//     char target[30];
//
//    ft_memset(target, 'A', 4);
//    printf("%s\n", target);
//
//    return (0);
// }
//