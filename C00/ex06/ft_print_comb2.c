/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 15:41:06 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/07 13:20:39 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_num_printer(char num1, char num2, char num3, char num4);

void	ft_check(char num1, char num2, char num3, char num4);

void	ft_loop(char num1, char num2, char num3, char num4);

void	ft_print_comb2(void)
{
	char num1;
	char num2;
	char num3;
	char num4;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '1';
	ft_loop(num1, num2, num3, num4);
}

char	ft_num_printer(char num1, char num2, char num3, char num4)
{
	while (num4 <= '9')
	{
		ft_check(num1, num2, num3, num4);
		num4++;
	}
	if (num4 > '9')
	{
		num4 = '0';
	}
	return (num4);
}

void	ft_check(char num1, char num2, char num3, char num4)
{
	if (!(num1 == num3 && num2 == num4))
		if (num1 != '9' || num2 != '9')
		{
			write(1, &num1, 1);
			write(1, &num2, 1);
			write(1, " ", 1);
			write(1, &num3, 1);
			write(1, &num4, 1);
			if (num1 != '9' || num2 != '8' || num3 != '9' || num4 != '9')
				write(1, ", ", 2);
		}
}

void	ft_loop(char num1, char num2, char num3, char num4)
{
	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				num4 = ft_num_printer(num1, num2, num3, num4);
				num3++;
			}
			num2++;
			if (num3 > '9')
			{
				num4 = num2 + 1;
				num3 = num1;
			}
		}
		if (num2 > '9')
		{
			num2 = '0';
		}
		num1++;
	}
}
