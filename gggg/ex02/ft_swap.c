/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgunes <sgunes@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:05:52 by sgunes            #+#    #+#             */
/*   Updated: 2023/09/06 19:10:22 by sgunes           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

int main(void)
{
	int x;
	int y;

	x = 3;
	y = 2;
	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);


}

