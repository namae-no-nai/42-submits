/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:39:07 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/09 08:32:44 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long x;

	x = nb;
	if (x < 0)
	{
		ft_putchar('-');
		x = x * -1;
	}
	if (x / 10 > 0)
		ft_putnbr(x / 10);
	ft_putchar(x % 10 + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
