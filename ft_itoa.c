/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:58:50 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/26 10:58:50 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_num_length(int n)
{
    int length = 1;

    if (n < 0)
    {
        length++;
    }
    while (n / 10)
    {
        length++;
        n /=10;
    }
    return (length);

}
 char *ft_itoa(int n)
 {
    char *str;
    int len;
    long num;

    num = n;
    len = get_num_length(num);
    str = (char *)malloc(sizeof(char)) * (len + 1));
    if (!str)
    {
        return (NULL);
    }
    str[len] = '\0';

    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    if (num == 0)
    {
        str[0] = '0';
    }
    while (num > 0)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
 }