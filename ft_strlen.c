/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:31:55 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/15 17:20:32 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "Teste testinho";
// 	int	result = ft_strlen(str);
// 	printf("The length of the string is %d\n", result);
// 	return (0);
// }