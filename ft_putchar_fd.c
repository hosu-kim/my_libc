/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:26:28 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/09 11:39:07 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
// file descriptor: 0(input), 1(output), 2(error output)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	char character;
//
// 	ft_putchar_fd('A', 1);
// 	printf("\n");
// 	return (0);
// }
//