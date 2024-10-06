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

static size_t ft_word_counter(const char *s, char delimiter)
// (1) skips the delimiter.
// (2) skips to the end of a word.
{
    size_t count;
    count = 0;
    
    if (!*s)
    {
        return (0);
    }
    while (*s)
    {
        while (*s == delimiter)
        {
            s++;
        }
        if (*s != delimiter)
        {
            count++;
            while (*s && *s != delimiter)
            {
                s++;
            }
        }
    }
    return (count);
}

char **ft_split(const char *s, char delimiter)
{
    char **result;
    char *beginning_of_a_word;
    size_t word_length;
    size_t i;
    size_t j;

    if (!s)
        return (NULL);

    result = (char **)malloc((ft_word_counter(s, delimiter) + 1) * sizeof(char *));

    if (!result)
    {
        return (NULL);
    }

    i = 0;

    while (*s)
    {
        while (*s == delimiter)
        {
            s++;
        }
        if (*s != delimiter)
        {
            beginning_of_a_word = (char *)s;
            word_length = 0;

            while (*s && *s != delimiter)
            {
                word_length++;
                s++;
            }
            result[i] = (char *)malloc((word_length + 1) * sizeof(char));
            if (!result[i])
            {
                while (j < i)
                {
                    free(result[j]);
                    j++;
                }
                free(result);
                return (NULL);
            }
            ft_strlcpy(result[i], beginning_of_a_word, word_length + 1);
            i++;
        }
    }
    result[i] = NULL;
    return (result);
}

// int main()
// {
//     char **store;
//     char *string = "Alpha|Bravo|Charlie";
//     int i;
//
//     i = 0;
//     store = ft_split(string, '|');
//     while (store[i])
//     {
//         printf("%s\n", store[i]);
//         i++;
//     }
//
//     return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_split.c ft_strlcpy.c ft_strlen.c