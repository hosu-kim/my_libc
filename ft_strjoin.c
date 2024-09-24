/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:47:26 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/24 12:47:26 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_str;
    size_t s1_len;
    size_t s2_len;
    size_t total_len;

    if (!s1 || !s2)
    {
        return (NULL);
    }

    s1_len = strlen(s1);
    s2_len = strlen(s2);
    total_len = s1_len + s2_len;

    new_str = (char *)malloc(sizeof(char) * (total_len + 1));
    if (!new_str)
    {
        return (NULL);
    }

    strcpy(new_str, s1);
    strcat(new_str, s2);

    return (new_str);
}