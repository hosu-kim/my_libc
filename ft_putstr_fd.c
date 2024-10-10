/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:37:24 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/09 11:45:08 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
// prints the provided string one char by one char
{
	unsigned int	i;

	if (s == NULL || fd < 0)
	{
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int main()
// {
// 	char	*string = "I'm a string.\n";
// 	ft_putstr_fd(string, 1);
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_putstr_fd.c