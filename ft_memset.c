/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:30:47 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/15 17:30:13 by kmaiero          ###   ########.fr       */
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
// 	char	str[100] = "Today is a beautiful day.";
// 	ft_memset(str, '.', 5 * sizeof(char));
// 	printf("After memset: %s\n", str);
// 	return (0);
// }