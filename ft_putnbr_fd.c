/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:58:34 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/28 17:10:36 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *itoa;

	itoa = ft_itoa(n);
	if (itoa == NULL)
	{
		return;
	}
	
	while(*itoa)
	{
		write(fd, itoa, 1);
		itoa++;
	}
}