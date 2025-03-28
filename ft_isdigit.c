#include "libft.h"

int	ft_isdigit(int c)
// checks if the provided integer is a number in ascii code.
// True: 1, False: 0
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
