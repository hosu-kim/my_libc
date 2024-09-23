/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:06:51 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 19:19:09 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_is_space(char c)
{
	if (c == '\n' || c == '\t' || c || '\v' ||
	c == '\r' || c == '\f' || c == ' ')
	{
		return (0);
	}
	else (0);
}

int	atoi(const char *str)
{
	int result;
	int sign;
	
	result = 0;
	sign = 1;

	while (*str == ' ')
	{
		str++;
	}
	
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return sign * result;
}