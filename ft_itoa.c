/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:39:46 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/27 20:19:46 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	nb[INT_DIGITS_BUFFER_SIZE];
	char	*p;
	int		neg;

	p = nb + INT_DIGITS_BUFFER_SIZE;
	*--p = 0;
	neg = (n < 0);
	while (1)
	{
		if (n > 0)
			*--p = '0' + (n % 10);
		else
			*--p = '0' - (n % 10);
		n /= 10;
		if (!n)
			break ;
	}
	if (neg)
		*--p = '-';
	return (ft_strdup(p));
}

// int main()
// {
// 	int nmb = 89;
// 	char *val = ft_itoa(nmb);
// 	printf("This is number %d\n", nmb);
// 	printf("This is string %s\n", val);
// 	return 0;
// }