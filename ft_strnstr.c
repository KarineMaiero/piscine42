/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:11:41 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/29 00:16:29 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while ((s1[i + j] == s2[j]) && (i + j) < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)(&s1[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main () {
//     const char str1[20] = "Today is a day.";
//     const char str2[10] = "i";
//     char *result;
//     result = ft_strnstr(str1, str2, 7);
//     printf("After: \n\tThe substring is: %s\n", result);
//     return(0);
// }