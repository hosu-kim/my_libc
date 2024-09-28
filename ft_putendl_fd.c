/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:46:35 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/28 17:15:30 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	if(s == NULL || fd < 0) // checks if vaild parameters are
	{
		return;
	}
	
	while (*s)
	{
		write(fd, &s[i], 1);
		s++;
	}
	write(fd, '\n', 1);
}