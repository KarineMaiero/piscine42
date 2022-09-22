/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:31:51 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/16 21:25:32 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(len + 1);
	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (substr);
	while (s[start] != '\0' && i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

// size_t	ft_strlen(const char	*s)
// {
// 	size_t	i;
// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }
// #include <stdio.h>
// int main()
// {
// 	printf("%s\n", ft_substr("Today is a beautiful day.", 6, 2));	
// 	return 0;
// }