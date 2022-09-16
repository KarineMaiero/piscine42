/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:42:23 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/16 22:43:05 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(214748364, fd);
		ft_putchar_fd('8', fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd((n + 48), fd);
	else if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10 + 48), fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((n * -1), fd);
	}
}

// int main()
// {
// 	int	nmb = 343;
// 	ft_putnbr_fd(nmb, 1);
// 	return (0);
// }