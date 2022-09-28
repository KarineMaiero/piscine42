/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:08:34 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/27 23:04:14 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char dst[20] = "Today is";
// 	char src[20] = "a beautiful day.";
// 	printf("Before: \n\tdst: %s\n", dst);
// 	printf("\tsrc: %s\n", src);
// 	ft_memcpy(dst, src, sizeof(src));
// 	printf("After: \n\tdst: %s\n", dst);
// 	return (0);
// }