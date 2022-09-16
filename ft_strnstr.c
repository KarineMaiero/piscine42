/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:11:41 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/15 23:42:27 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main () {
//     const char str1[20] = "Todayisaday";
//     const char str2[10] = "is";
//     char *result;
//     result = ft_strnstr(str1, str2, 8);
//     printf("After: \n\tThe substring is: %s\n", result);
//     return(0);
// }