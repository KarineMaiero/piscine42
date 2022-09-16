/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:16:32 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/15 20:24:59 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{	
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
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
// int main ()
// {
// 	const char str[] = "Today is a beautiful day.";
// 	const char ch = 'b';
// 	char *result;
// 	printf("Before: \n\t%s\n", str);
// 	result = ft_strrchr(str, ch);
// 	printf("After: \n\t%s\n", result);
// 	return (0);
// }