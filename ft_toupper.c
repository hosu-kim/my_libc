/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:48:17 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 16:54:48 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	return (c);
}

// int main()
// {
// 	char cha;
//	
// 	cha = 'c'; // Modify me
// 	ft_toupper(cha);
// 	printf("%c\n", cha);
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_toupper.c