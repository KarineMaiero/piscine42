/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:00:49 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/24 17:03:48 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src);

int	main(void)
{
	char	origem[] = "String de origem";
	char	destino[] = "String de destino";
	char	*dest;

	printf("Antes:\n\torigem: %s\n\tdestino:%s\n", origem, destino);

	dest = ft_strcpy(origem, destino);

	printf("Depois:\n\torigem: %s\n\tdestino: %s\n", origem, destino);
}
