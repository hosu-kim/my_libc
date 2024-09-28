/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:59:42 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/24 23:59:42 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static in is_in_set(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
        {
            return (1);
        }
        set++;
    }
    return (0);
}

 char *ft_strtrim(char const *s1, char const *set)
 {
    size_t start;
    size_t end;
    size_t len;
    char *trimmed_str;

    if (!s1 || !set)
    {
        return (NULL);
    }

    start = 0;

    while (s1[start] && is_in_set(s1[start], set))
    {
        start++;
    }

    end = strlen(s1);
    while (end > start && is_in_set(s1[end - 1], set))
    {
        end--;
    }

    len = end - start;
    trimmed_str = (char *)malloc(len + 1);
    if (!trimmed_str)
    {
        return (NULL);
    }

    strncpy(trimmed_str, s1 + start, len);
    trimmed_str[len] = '\0';

    return (trimmed_str);
}