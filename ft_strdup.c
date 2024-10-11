/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:14:55 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/22 19:14:55 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		index;
	int		strlen;

	strlen = ft_strlen(str);
	dup = (char *)malloc(strlen + 1);
	if (!dup)
		return (NULL);
	index = 0;
	while (str[index])
	{
		dup[index] = str[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}

// int main()
// {
//     char *source = "-Wall -Werror -Wextra";
//     char *destination;
//
//     destination = ft_strdup(source);
//     printf("%s\n", destination);
//
//     return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_strdup.c ft_strlen.c