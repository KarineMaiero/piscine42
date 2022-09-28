/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:39:41 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/28 23:37:30 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// 	char str[30] = "ESSE É NOSSO NOVO TEXTO";
// 	printf("The result is %s\n", str);
// 	char **result = ft_split(str, 'N');
// 	// printf("The result is %s\n", *result);
// 	printf("The result is %s\n", result[0]);
// 	printf("The result is %s\n", result[1]);
// 	printf("The result is %s\n", result[2]);
// 	printf("The result is %s\n", result[3]);
// 	printf("The result is %s\n", result[4]);
// 	printf("The result is %s\n", result[5]);
// 	return 0;
// }