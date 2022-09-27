/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 01:06:48 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/27 20:32:42 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*pos;
	size_t	tot_size;
	int		fill_byte;

	tot_size = nmemb * size;
	fill_byte = 0;
	if (!nmemb || !size || size > 2147483647 / nmemb)
		return (NULL);
	pos = malloc(tot_size);
	if (!pos)
		return (NULL);
	ft_memset (pos, fill_byte, tot_size);
	return ((void *)pos);
}

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	char	*p;

// 	p = (char *)s;
// 	while (n > 0)
// 	{
// 		*p = c;
// 		p++;
// 		n--;
// 	}
// 	return (s);
// }
// #include <stdio.h>
// int main() {

//     int* a = (int*) calloc(5, sizeof(int));

//     return 0;
// }