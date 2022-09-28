/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:49:16 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/27 22:56:36 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main ()
// {
// 	const char	str[] = "Today is a beautiful day.";
// 	const char ch = 'i';
// 	char *result;
// 	printf("Before: \n\t%s\n", str);
// 	result = ft_memchr(str, ch, 5);
// 	printf("After: \n\t%s\n", result);
// 	return (0);
// }