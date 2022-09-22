/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 21:33:34 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/20 23:27:19 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);
}

// #include <stdio.h>
// int main () {
// 	const char str[] = "Today is a beautiful day.";
// 	const char ch = 'i';
// 	char *result;
// 	printf("Before: \n\t%s\n", str);
// 	result = ft_strchr(str, ch);
// 	printf("After: \n\t%s\n", result);
//     return(0);
// }