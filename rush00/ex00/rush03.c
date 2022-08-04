/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:14:16 by kmaiero           #+#    #+#             */
/*   Updated: 2022/07/10 15:17:06 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char l);

void	rush_print(int length, char first, char second, char third)
{
	int	count;

	count = 1;
	while (count <= length)
	{
		if (count == 1)
			ft_putchar(first);
		else if (count == length)
			ft_putchar(third);
		else
			ft_putchar(second);
		count++;
	}
	ft_putchar('\n');
}

void	rush_03(int x, int y)
{
	int	row_count;

	row_count = 1;
	if (x >= 1 && y >= 1)
	{
		while (row_count <= y)
		{
			if (row_count == 1)
				rush_print (x, 'A', 'B', 'C');
			else if (row_count == y)
				rush_print (x, 'A', 'B', 'C');
			else
				rush_print (x, 'B', ' ', 'B');
			row_count++;
		}
	}
}
