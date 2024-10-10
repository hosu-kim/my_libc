/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:01:35 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/19 19:01:35 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
// checks if the provided integer is in ascii code.
// True: 1, False: 0
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
