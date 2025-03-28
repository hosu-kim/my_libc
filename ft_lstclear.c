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
