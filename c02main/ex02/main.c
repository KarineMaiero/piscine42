/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:55:50 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/26 12:39:32 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char	*str);

int	main(void)
{
	char	alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char	*pAlpha;
	pAlpha = alpha;

	char	others[] = "ABC abc ÁÉÍÓÚ áéíóú '?/;@#$%&*";
	char	*pOthers;
	pOthers = others;

	char	empty[] = "";
	char	*pEmpty;
	pEmpty = empty;

	printf("%s = %d", alpha, ft_str_is_alpha(pAlpha));
	printf("\n%s = %d", others, ft_str_is_alpha(pOthers));
	printf("\n%s = %d", empty, ft_str_is_alpha(pEmpty));
}
