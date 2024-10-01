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

void *ft_memset(void *pointer, int value, size_t number)
{
    
    char *p;
    size_t i;

    p = pointer;
    i = 0;

    while(i < number)
        p[i++] = value;
    return(pointer);
}