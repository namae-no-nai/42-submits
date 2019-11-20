/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:43:52 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/19 14:34:42 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_hex(int value);

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
			print_hex(str[i]);
		if (str[i] == 39)
		{
			ft_putchar('\\');
			ft_putchar('\'');
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	print_hex(int value)
{
	char	ch[2];
	int		i;

	i = 1;
	while (value != 0)
	{
		ch[i--] = value % 16 < 10 \
				? value % 16 + '0' : value % 16 + ('a' - 10);
		value /= 16;
	}
	while (i >= 0)
		ch[i--] = '0';
	ft_putchar('\\');
	ft_putchar(ch[0]);
	ft_putchar(ch[1]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
