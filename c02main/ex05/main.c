/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:21:23 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/24 19:22:29 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char	*str);

int	main(void)
{
	char	alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*pAlpha;
	pAlpha = alpha;

	char	others[] = "ABC abc ÁÉÍÓÚ áéíóú '?/;@#$%&*";
	char	*pOthers;
	pOthers = others;

	char	empty[] = "";
	char	*pEmpty;
	pEmpty = empty;

	printf("%s = %d", alpha, ft_str_is_uppercase(pAlpha));
	printf("\n%s = %d", others, ft_str_is_uppercase(pOthers));
	printf("\n%s = %d", empty, ft_str_is_uppercase(pEmpty));
}
