/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgunes <sgunes@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:26:58 by sgunes            #+#    #+#             */
/*   Updated: 2023/09/06 21:35:39 by sgunes           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	let_num;

	let_num = 0;
	while (str [let_num] != '\0')
	{
		write (1, &str[let_num], 1);
		let_num++;
	}
}

int main(void)
{
	ft_putstr("hey");

}
