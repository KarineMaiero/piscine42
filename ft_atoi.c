/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:44:55 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/27 21:25:25 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	s;

	s = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 7 && str[i] <= 13))
		i++;
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i + 1] == '-' || str[i +1] == '+'))
		return (0);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	result = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (s * result);
}

// int main()
// {
// char str[] = "-i89789";
// int val = ft_atoi(str);
// printf ("%d ", val);
// return 0;
// }