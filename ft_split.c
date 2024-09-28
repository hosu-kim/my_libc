/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 00:24:23 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/26 00:24:23 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_wordcount(char const *s, char c)
{
    size_t count;
    if (!*s)
    {
        return (0);
    }
    count = 0;
    while (*s)
    {
        while (*s == c) // skips the delimiter.
        {
            s++;
        }
        if (*s) // add 1 in the count; count words
        {
            count++;
        }
        while (*s && *s != c) // skips to the end of a word.
            s++;
        }
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    char **result;
    char *start;
    size_t word_length;
    size_t i;
    size_t j;

    if (!s) // returns NULL if the string is NULL.
    {
        return (NULL);
    }

    result = (char **)malloc((ft_wordcount(s, c)) + 1) * sizeof(char *));
// why + 1? to add NULL at the end of the array.
    if (!result)
    {
        return (NULL);
    }

    i = 0;

    while (*s)
    {
        while (*s == c) // skips the delimiter
        {
            s++;
        }
        if (*s) // if there's a word between the delimiter.
        {
            start = (char *)s;
            word_length = 0;

            while (*s && *s != c)
            {
                word_length++;
                s++;
            }
            result[i] = (char *)malloc((word_length + 1) * sizeof(char));
            if (!result[i]) // allocation failure -> free the memory
            {
                while (j < i)
                {
                    free(result[j]);
                    j++;
                }
                free(result);
                return (NULL);
            }
            ft_strlcpy(result[i], start, word_length + 1); // copy words to the result.
            i++;
        }
    }
    result[i] = NULL;
    return (result);
}