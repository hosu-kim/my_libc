#include "libft.h"

static int	ft_get_num_length(int n) // gets the length of a provided number.
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
// converts degits in integer to string.
// (1) if negative, 
//     removes minus sign and assign '-' to the first element of result_str.
// (2) assigns each number in ascii code to result_str.
{
	char	*result_str;
	int		len;
	long	num;

	num = n;
	len = ft_get_num_length(n);
	result_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!result_str)
		return (NULL);
	result_str[len] = '\0';
	if (n < 0)
	{
		num = -num;
		result_str[0] = '-';
	}
	while (0 <= --len && result_str[len] != '-')
	{
		result_str[len] = (num % 10) + 48;
		num /= 10;
	}
	return (result_str);
}

// int main()
// {
// 	char *to_str;
// 	int from_int;
//
// 	from_int = -38475;
// 	to_str = ft_itoa(from_int);
// 	printf("%s\n", to_str);
// 	return (0);
// }
