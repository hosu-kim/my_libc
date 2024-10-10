/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:57:05 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/21 17:22:37 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}

// int main()
// {
// 	char cha;
//	
// 	cha = 'C'; // Modify me
// 	ft_tolower(cha);
// 	printf("%c\n", cha);
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_tolower.c
//