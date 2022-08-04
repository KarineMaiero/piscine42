/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:09:04 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/22 16:59:17 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 30;
	b = 2;

	printf("%d\t%d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d\t%d\n", div, mod);
	return 0;
}
