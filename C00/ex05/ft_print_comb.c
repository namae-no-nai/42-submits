/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 14:23:58 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/07 09:14:55 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printer(char num1, char num2, char num3);

void	ft_print_comb(void)
{
	char num1;
	char num2;
	char num3;

	num1 = '0' - 1;
	num2 = '1';
	num3 = '2';
	while (num1++ <= '6')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			if (num1 != num2)
			{
				while (num3 <= '9')
				{
					ft_printer(num1, num2, num3);
					num3++;
				}
			}
			num2++;
		}
	}
}

void	ft_printer(char num1, char num2, char num3)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (num1 != '7' || num2 != '8' || num3 != '9')
		write(1, ", ", 2);
}
