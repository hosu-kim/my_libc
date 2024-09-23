/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:14:55 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/22 19:14:55 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *str)
{
    char *dup;
    int i;
    int strlen;

    if (!str)
    {
        return (NULL);
    }

    strlen = (int)ft_strlen(str);
    dup = (char *)malloc(strlen + 1);

    if (!(dup))
    {
        return (NULL);
    }

    i = 0;
    
    while (str[i])
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}