/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:04:39 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/16 20:30:48 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	n = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	i = 0;
	while ((i < size - (n - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
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
// int main () {
// char s1[50] = "This is s1. ";
// char s2[50] = "This is s2.";
// ft_strlcat(s1, s2, 30);
// printf("Final string : %s\n", s1);
// return(0);
// }
