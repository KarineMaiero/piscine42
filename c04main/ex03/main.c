/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:35:27 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/27 12:27:20 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char	*str);

int main(void)
{
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
	return (0);
}
