/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:55:55 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/22 21:45:03 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, src, ft_strlen(src) + 1);
	return (dest);
}

// size_t	ft_strlen(const char	*s)
// {
// 	size_t	i;
// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }
// size_t	ft_strlcpy(char *dest, const char *src, size_t n)
// {
// 	size_t	i;
// 	i = 0;
// 	if (n == 0)
// 		return (ft_strlen(src));
// 	while (src[i] != '\0' && i < (n - 1))
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (ft_strlen(src));
// }
// #include <stdio.h>
// int main()
// {
// 	char str[] = "GeeksForGeeks\n";
// 	char* result = ft_strdup(str);
// 	printf("%s", result);
// 	return 0;
// }