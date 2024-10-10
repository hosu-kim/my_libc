/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:30:20 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 21:30:20 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elements, size_t bytes)
// contiguous(touching) allocation
// allocates memory with requested a number of elements and the size for each.
{
	char	*ptr;

	ptr = malloc(elements * bytes);
	if (!(ptr))
	{
		return (NULL);
	}
	ft_memset(ptr, 0, elements * bytes);
	return (ptr);
}
