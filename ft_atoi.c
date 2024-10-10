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

int	ft_is_space(char c)
// finds spaces
// \n: new line, \t: tab, \r: return, \v: vertical tab, \f: form feed
{
	return (c == '\n' || c == '\t' || c == '\r' || \
			c == '\v' || c == '\f' || c == ' ');
}

int	ft_atoi(const char *str)
// converts digits in a string to an integer.
// (1) skips spaces (2)  saves minus sign to result 3. skips plus signs
// 4. // multiplies result by 10 and add the number to the end.
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

// int main()
// {
// 	char *str = "-38743";
//
// 	printf("%d\n",ft_atoi(str));
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_atoi.c