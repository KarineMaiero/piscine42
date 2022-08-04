/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:20:50 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/27 15:00:51 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Uma frase curta";
	char	to_find[] = "frase";

	printf("Antes:\n\torigem: %s\n\tencontrar: %s\n", str, to_find);
	printf("Depois:\n\tencontrado: %s\n", ft_strstr(str, to_find));
	return (0);
}
