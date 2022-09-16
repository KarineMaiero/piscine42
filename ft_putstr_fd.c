/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:35:40 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/16 22:37:12 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// int main()
// {
// 	char	l[20] = "Today is a good day.";
// 	ft_putstr_fd(l, 1);
// 	return (0);
// }