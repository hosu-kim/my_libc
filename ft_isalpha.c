#include "libft.h"

int	ft_isalpha(int c)
// checks if the provided integer is alphabet in ascii code.
// True: 1, False: 0
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	return (0);
}
