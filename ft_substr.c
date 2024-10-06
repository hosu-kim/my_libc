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
    size_t index;
    size_t str_len;

    if (!s)
    {
        return (NULL);
    }

    str_len = ft_strlen(s);

    if (start >= str_len)
    {
        return (strdup(""));
    }

    if (len > str_len - start)
    {
        len = str_len - start;
    }

    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
    {
        return (NULL);
    }

    index = 0;
    while (index < len && s[start + index])
    {
        substr[index] = s[start + index];
        index++;
    }

    substr[index] = '\0';
    return (substr);
 }

// int main()
// {
//     char *string = "The weather channel uses data.";
//     char *sub;
//
//     sub = ft_substr(string, 25, 4);
//     printf("%s\n", sub);
//     return (0);
// }
// // cc -Wall -Werror -Wextra ft_substr.c ft_strlen.c