/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:11:28 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/24 19:17:13 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char	*str);

int	main(void)
{
	char	alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char	*pAlpha;
	pAlpha = alpha;

	char	others[] = "ABC abc ÁÉÍÓÚ áéíóú '?/;@#$%&*";
	char	*pOthers;
	pOthers = others;

	char	empty[] = "";
	char	*pEmpty;
	pEmpty = empty;

	printf("%s = %d", alpha, ft_str_is_lowercase(pAlpha));
	printf("\n%s = %d", others, ft_str_is_lowercase(pOthers));
	printf("\n%s = %d", empty, ft_str_is_lowercase(pEmpty));
}
