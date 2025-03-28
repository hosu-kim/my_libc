#include "libft.h"

void	*ft_calloc(size_t elements, size_t bytes)
// contiguous(touching) allocation
// allocates memory with requested a number of elements and the size for each.
{
	char	*ptr;

	ptr = malloc(elements * bytes);
	if (!(ptr))
	{
		return (NULL);
	}
	ft_memset(ptr, 0, elements * bytes);
	return (ptr);
}
