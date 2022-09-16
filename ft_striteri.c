/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:28:32 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/16 23:34:41 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, s + i);
		i++;
	}
}

// #include <stdio.h>
// void my_func(unsigned int i, char *str)
// {
// 	printf("My inner function: index = %d and the string is %s\n", i, str);
// }
// int main()
// {
// 	char str[10] = "Hello.";
//  	printf("The result is %s\n", str);
//  	ft_striteri(str, my_func);
//  	printf("The result is %s\n", str);
// 	return 0;
// }