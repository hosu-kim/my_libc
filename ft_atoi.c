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

int ft_is_space(char c)// finds spaces
{
	if (c == '\n' || c == '\t' || c || '\r' ||// \n: new line, \t: tab, \r: return
	c == '\v' || c == '\f' || c == ' ')// \v: vertical tab, \f: form feed; seldom used
	{
		return (0);
	}
	else (1);
}

int	ft_atoi(const char *str)// converts digits in a string to an integer.
{
	int result;
	int sign;
	
	result = 0;
	sign = 1;

	while (*str == ' ')// skips blanks
	{
		str++;
	}
	
	if (*str == '-')//saves minus sign in the sign variable.
	{
		sign = -1;
		str++;
	} 
	else if (*str == '+')//skips plus signs
	{
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');// multiplies the saved number by 10 
		str++;//                               and add the number to the end.
	}
	return sign * result;
}

// int main()
// {
// 	char *str = "-38743";
//
// 	printf("%d\n",ft_atoi(str));
// 	return (0);
// }