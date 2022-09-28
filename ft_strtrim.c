/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:21:14 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/28 20:33:07 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str || !s1 || !set)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s != (char)c)
// 	{
// 		if (!*s++)
// 			return (0);
// 	}
// 	return ((char *)s);
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
// 	char	str[25] = "kkzStringOneyyz";
// 	char	str2[25] = "zykStringTwoykz";
// 	char	find[4] = "yzk";
// 	printf("%s\n", ft_strtrim(str, find));
// 	printf("%s\n", ft_strtrim(str2, find));
// 	return 0;
// }