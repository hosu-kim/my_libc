/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:28:30 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/23 13:28:30 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src_str, unsigned int extract_start, \
					size_t len_of_extract)
// extracts a substring from a string.
// if (len_of_extract > src_len - extract_start)
// : if the requested length exceeds the remaining characters
// of the source str, 
// len_of_extract is only set up to the end of src_str
{
	char	*extract;
	size_t	index;
	size_t	src_len;

	if (!src_str)
		return (NULL);
	src_len = ft_strlen(src_str);
	if (src_len <= extract_start)
		return (ft_strdup(""));
	if (len_of_extract > src_len - extract_start)
		len_of_extract = src_len - extract_start;
	extract = (char *)malloc(sizeof(char) * (len_of_extract + 1));
	if (!extract)
		return (NULL);
	index = 0;
	while (index < len_of_extract && src_str[extract_start] + index)
	{
		extract[index] = src_str[extract_start + index];
		index++;
	}
	extract[index] = '\0';
	return (extract);
}

// int main()
// {
//     char *string = "The weather channel uses data.";
//     char *sub;
//
//     sub = ft_substr(string, 25, 4);
//     printf("%s\n", sub);
//     return (0);
// }
// // cc -Wall -Werror -Wextra ft_substr.c ft_strlen.c