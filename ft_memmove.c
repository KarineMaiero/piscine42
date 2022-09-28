/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:29:28 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/27 23:25:17 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (d == s)
		return (d);
	if (s < d)
	{
		i = n;
		while (i--)
			((char *)d)[i] = ((char *)s)[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)d)[i] = ((char *)s)[i];
			i++;
		}
	}
	return (d);
}

// #include <stdio.h>
// int main()
// {
// 	char	dst[25] = "Today is a new day";
// 	char	src[25] = "a beautiful day.";
// 	printf("Before: \n\tdest: %s\n", dst);
// 	printf("\n\tsrc: %s\n", src);
// 	ft_memmove(dst, src, 11);
// 	printf("After: \n\tdest: %s\n", dst);
// 	return (0);
// }