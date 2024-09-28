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

static size_t count_words(char const *s, char c)
{
    size_t count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if
        {
            (*s == c)
            {
                in_word = 0;
            }
        }
        s++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{

}