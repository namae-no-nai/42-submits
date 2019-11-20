/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsonoda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 16:32:34 by gsonoda           #+#    #+#             */
/*   Updated: 2019/10/06 11:12:06 by gbertho-         ###   ########.fr       */
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
			if ((v == 1 && h == 1) || (v == y && h == 1))
				ft_putchar('A');
			else if (h == x && v == 1)
				ft_putchar('C');
			else if (h == x && v == y)
				ft_putchar('C');
			else if ((v == 1) || (h == 1) || (h == x) || (v == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
