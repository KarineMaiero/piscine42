/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:03:53 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/24 20:42:36 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "abcdefghijklMNOPQRSTUVWXYZ";

	printf("%s", ft_strupcase(str));
}
