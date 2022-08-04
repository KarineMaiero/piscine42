/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:31:35 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/24 20:00:36 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char	alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~";
	char	*pAlpha;
	pAlpha = alpha;

	char	others[2] = {2, 5};
	char	*pOthers;
	pOthers = others;

	char	empty[] = "";
	char	*pEmpty;
	pEmpty = empty;

	printf("%s = %d", alpha, ft_str_is_printable(pAlpha));
	printf("\n%s = %d", others, ft_str_is_printable(pOthers));
	printf("\n%s = %d", empty, ft_str_is_printable(pEmpty));
}
