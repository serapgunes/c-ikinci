/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgunes <sgunes@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:05:12 by sgunes            #+#    #+#             */
/*   Updated: 2023/09/07 19:55:29 by sgunes           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = size - 1;
	while (x < size / 2)
	{
		z = tab[x];
		tab[x] = tab[y];
		tab[y] = z;
		x++;
		y--;
	}
}
