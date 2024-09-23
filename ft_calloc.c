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

#include <stdlib.h>

void *ft_calloc(size_t num, size_t size)
{
    char *ptr;

    ptr = malloc(num * size);
    if (!(ptr))
    {
        return (NULL);
    }
    ft_memset(ptr, 0, num * size);
    return (ptr);
}