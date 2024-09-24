/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:28:30 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/23 13:28:30 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *ft_substr(char const *s, unsigned int start, size_t len)
 {
    char *substr;
    size_t i;
    size_t s_len;

    if (!s)
    {
        return (NULL);
    }

    s_len = strlen(s);

    if (start >= s_len)
    {
        return (strdup(""));
    }

    if (len > s_len - start)
    {
        len = s_len - start;
    }

    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!stbstr)
    {
        return (NULL);
    }

    i = 0;
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }

    substr[i] = '\0';
    return (substr);
 }