/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:12:09 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/19 19:12:09 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *s)
// returns the length of the provided string.
{
    size_t i;
    
    i = 0;
    while(s[i])
        i++;
    return(i);
}

<<<<<<< HEAD
// int main()
// {
//     char *string = "12345";
//
//     printf("%d\n", ft_strlen(string));
//
//     return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_strlen.c
=======
int main()
{
    char *string = "I've been rim of the world"
}
>>>>>>> ddae1764810e4192773daeac7d2b9335e833f9b7
