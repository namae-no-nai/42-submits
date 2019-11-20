/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsonoda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 16:32:34 by gsonoda           #+#    #+#             */
/*   Updated: 2019/10/07 15:09:59 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	rush(int x, int y)
{
	int	v;
	int	h;

	v = 1;
	while (v <= y)
	{
		h = 1;
		while (h <= x)
		{
			if ((v == 1 && h == 1) || (v == 1 && h == x))
				ft_putchar('o');
			else if ((v == y && h == 1) || (v == y && h == x))
				ft_putchar('o');
			else if ((v == 1) || (v == y))
				ft_putchar('-');
			else if ((h == x) || (h == 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
