/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:46:35 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/12 16:58:50 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
// prints a string and a new line.
// (1) checks if the parameters are vaild
// (2) iterates writing chars one by one.
{
	write(fd, s, ft_strlen(s));
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