#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst2;

	lst2 = *lst;
	if (!(*lst))
		*lst = new;
	else
	{
		while (lst2->next)
			lst2 = lst2->next;
		lst2->next = new;
	}
}
