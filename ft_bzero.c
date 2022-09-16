/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:51:14 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/16 01:19:27 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// int main()
// {
// 	char str[50] = "Today is a beautiful day.";
// 	ft_bzero(str, 1);
// 	printf("After: %s\n", str);
// 	return (0);
// }