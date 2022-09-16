/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:14:30 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/13 20:52:23 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int	b = '-';
// 	int a = 'a';
// 	int c = '8';
// 	printf("%i\n", ft_isalnum(b));
// 	printf("%i\n", ft_isalnum(a));
// 	printf("%i\n", ft_isalnum(c));
// }