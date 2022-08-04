/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:35:59 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/28 00:35:25 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char	s1[7] = "aioioi";
	char	s2[7] = "oiaiai";
	unsigned int	n = 2;

	printf("s1 & s2, %s\t%s\t%d", s1, s2, ft_strncmp(s1,s2, n));
}
