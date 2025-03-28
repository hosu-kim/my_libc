#include "libft.h"

t_list	*ft_lstnew(void *content)
// ->: to access a member of a structure.
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!(lst))
	{
		return (NULL);
	}
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
