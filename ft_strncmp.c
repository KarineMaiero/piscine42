/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:23:06 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/20 23:35:31 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// int main () 
// {
// 	char str1[15] = "abcdf";
// 	char str2[15] = "abcdz";
// 	int result;
// 	result = ft_strncmp(str1, str2, 5);
// 	if(result < 0) {
// 	printf("str1 is less than str2\n");
// 	} else if(result > 0) {
// 	printf("str2 is less than str1\n");
// 	} else {
// 	printf("str1 is equal to str2\n");
// 	}
// 	printf("Value returned by strncmp() is: %d\n", result);
// 	return(0);
// }