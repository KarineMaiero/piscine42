/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 01:06:48 by kmaiero           #+#    #+#             */
/*   Updated: 2022/09/22 21:45:56 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelements, size_t size)
{
	void	*p;

	p = malloc(nelements * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nelements * size);
	return (p);
}

// int main()
// {
// }