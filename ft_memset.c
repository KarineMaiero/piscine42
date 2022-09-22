/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:30:47 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/20 23:42:24 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}

// #include <stdio.h>
// int main()
// {
// 	char	str[30] = "Today is a beautiful day.";
// 	printf("Before: \n\t%s", str);
// 	ft_memset(str, '.', 5);
// 	printf("\nAfter: \n\t%s\n", str);
// 	return (0);
// }