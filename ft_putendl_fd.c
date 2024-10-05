/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:46:35 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/05 16:10:21 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
// (1) checks if the parameters are vaild
{
	if(s == NULL || fd < 0)
	{
		return;
	}
	
	while (*s)
	{
		write(fd, &s, 1);
		s++;
	}
	write(fd, '\n', 1);
}