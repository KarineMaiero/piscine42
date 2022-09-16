/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:07:50 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/15 19:35:27 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
// 	int b = 'H';
// 	printf("%i\n", ft_tolower(b));	
// }