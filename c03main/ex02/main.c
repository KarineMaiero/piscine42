/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:02:27 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/25 15:49:48 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int	main()
{
	char	src[] = "String";
	char	dest[15] = "Complete";

	printf("Antes:\n\torigem: %s\n\tdestino: %s\n", src, dest);
	ft_strcat(dest, src);
	printf("Depois:\n\torigem: %s\n\tdestino: %s\n", src, dest);
}
