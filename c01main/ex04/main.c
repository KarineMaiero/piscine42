/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:11:39 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/22 17:04:02 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);
int main()
{
	int a = 7;
	int b = 2;
	if(b != 0)
	{
		ft_ultimate_div_mod(&a, &b);
		printf("%d\t%d\n", a, b);
	}
}
