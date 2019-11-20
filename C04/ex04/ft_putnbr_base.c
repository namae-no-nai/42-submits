/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:51:44 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/19 19:21:21 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_display(long nb, char *str, int str_lenght);

int		ft_basecheck(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		str_length;
	long	nb;

	nb = nbr;
	str_length = ft_basecheck(base);
	if (str_length != 1)
	{
		ft_display(nb, base, str_length);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_basecheck(char *base)
{
	int		i;
	int		j;

	if (!base)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] == '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (1);
	return (i);
}

void	ft_display(long nb, char *str, int str_length)
{
	long	number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
		number = nb;
	if (number >= str_length)
		ft_display(number / str_length, str, str_length);
	ft_putchar(str[number % str_length]);
}
