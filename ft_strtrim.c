/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:21:14 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/16 22:30:05 by kmaiero          ###   ########.fr       */
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

// #include <stdio.h>
// int main()
// {
// 	char	s[30] = " \t\nThis is string. \tContinue.";
// 	char	*result = ft_strtrim(s);
// 	printf("The result is %s\n", result);
// 	return 0;
// }