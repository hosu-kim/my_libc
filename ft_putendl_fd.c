/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:46:35 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/06 10:40:13 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
// prints a string and a new line.
// (1) checks if the parameters are vaild
// (2) iterates writing chars one by one.
{
	if (s == NULL || fd < 0)
	{
		return;
	}
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

// int main()
// {
// 	char *string = "I like Python.";
//
// 	ft_putendl_fd(string, 1);
//
// 	return (0);
// }
//