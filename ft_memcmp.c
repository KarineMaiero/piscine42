/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:26:50 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/29 00:16:54 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char str1[10] = "aaaabc";
// 	char str2[10] = "aaaacd";
// 	int	result;
// 	result = ft_memcmp(str1, str2, 6);
// 	printf("%d\n", result);
// 	// if (result > 0)
// 	// {
// 	// 	printf("str2 is less than str1\n");
// 	// } else if (result < 0)
// 	// {
// 	// 	printf("str1 is less than str2\n");
// 	// } else {
// 	// 	printf("str1 is equal to str2\n");
// 	// }
// 	return (0);
// }