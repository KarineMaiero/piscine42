/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:51:32 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/25 16:51:56 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char	src[] = "String";
	char	dest[15] = "Complete";
	unsigned int	nb = 2;

	printf("Antes:\n\torigem: %s\n\tdestino: %s\n", src, dest);
	ft_strncat(dest, src, nb);
	printf("Depois:\n\torigem: %s\n\tdestino: %s\n", src, dest);
}
