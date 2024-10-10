/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:14:28 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/08 10:45:04 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst2;

	lst2 = *lst;
	if (lst || *lst)
	{
		while (*lst)
		{
			*lst = lst2->next;
			del(lst2->content);
			free(lst2);
			lst2 = *lst;
		}
	}
}
