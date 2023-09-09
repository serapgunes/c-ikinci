/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgunes <sgunes@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:45:04 by sgunes            #+#    #+#             */
/*   Updated: 2023/09/06 22:13:53 by sgunes           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	let_num;

	let_num = 0;
	while (str [let_num] != '\0')
	{
		let_num++;
	}
	return (let_num);
}

int main (void)
{
	char *c="hello";
	printf("%d", ft_strlen(c));
}
