/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:51:02 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/28 19:40:52 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
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
// 	char	s1[15] = "String one.";
// 	char	s2[15] = "String two.";
// 	char	*result = ft_strjoin(s1, s2);
// 	printf("s1 doesn't change: %s\n", s1);
// 	printf("s2 doesn't change: %s\n", s2);
// 	printf("The results is: \n\t%s\n", result);
// 	return (0);
// }