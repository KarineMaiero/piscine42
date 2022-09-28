/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:35:38 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/28 20:07:36 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
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
//   char src[] = "Today is";
//   char dest[] = "";
//   printf("Before dest: \n\t%s\n", dest);
//   printf("Before src: \n\t%s\n", src);
//   int result = ft_strlcpy(dest, src, 15);
//   printf("After dest: \n\t%s\n", dest);
//   printf("After src: \n\t%s\n", src);
//   printf("%d\n", result);
// }