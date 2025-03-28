#include "libft.h"

int	ft_isalnum(int c)
// checks if the provided integer is an alphabet or number in ascii code.
// True: 1, False: 0
{
	if (('0' <= c && c <= '9') || \
	('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
