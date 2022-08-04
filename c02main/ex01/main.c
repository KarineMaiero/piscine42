/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:33:25 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/24 17:39:48 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int n);

int	main(void)
{
	char 	source[] = "fafafafafa";
	char	destin[] = "dagdad";
	char	*src;
	char	*dest;
	unsigned int n;

	n = 4;
    
	dest = destin;
	src = source; 

	printf("ANTES\n\torigem: %s\n\tdestino: %s\n", src, dest);

	ft_strncpy(dest, src, n);

	printf("DEPOIS\n\torigem: %s\n\tdestino: %s\n", src, dest);
	return (0);
}
