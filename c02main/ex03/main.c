/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:54:37 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/27 23:02:01 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str);

int	main(void)
{
	char	empty[] = "";
	char *pEmpty;
	pEmpty = empty;

	char	number[] = "1234567890";
	char	*pNumber;
	pNumber = number;

	char	others[] = "1234567890_";
	char	*pOthers;
	pOthers = others;

	printf("%s = %d\n", empty, ft_str_is_numeric(pEmpty));
	printf("%s = %d\n", number, ft_str_is_numeric(pNumber));
	printf("%s = %d", others, ft_str_is_numeric(pOthers));
}
