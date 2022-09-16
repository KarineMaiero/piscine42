/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:59:35 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/13 22:58:46 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	int	b = 0;
// 	printf("%i\n", ft_isdigit(b));
// 	return (0);
// }
