/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:58:34 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/09 11:44:04 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
// prints a number in the terminal.
{
	char	*itoa;

	itoa = ft_itoa(n);
	if (itoa == NULL)
	{
		return ;
	}
	while (*itoa)
	{
		write(fd, itoa, 1);
		itoa++;
	}
}

// int main()
// {
// 	int a_number;
//
// 	a_number = -123456789;
// 	ft_putnbr_fd(a_number, 1);
// 	printf("\n");
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_putnbr_fd.c ft_itoa.c