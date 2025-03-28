#include "libft.h"

int	ft_isascii(int c)
// checks if the provided integer is in ascii code.
// True: 1, False: 0
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
