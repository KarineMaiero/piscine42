/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:38:56 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/16 22:39:48 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main()
// {
// 	char	str[20] = "Today is a good day.";
// 	ft_putendl_fd(str, 1);
// 	return (0);
// }