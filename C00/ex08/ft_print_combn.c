/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:29:01 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/09 11:31:34 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_loop(int *numbers, int alg, int n);

void	ft_print_numbers(void);

void	ft_putchar(char c);

void	ft_print_combn(int n)
{
	int	numbers[10];
	int	i;
	int	alg;

	if (n == 1)
	{
		ft_print_numbers();
	}
	if (n > 1 && n <= 9)
	{
		alg = n - 1;
		i = -1;
		while (i++ < 9)
			numbers[i] = i;
		i = 0;
		while (i < n)
			ft_putchar(numbers[i++] + '0');
		ft_loop(numbers, alg, n);
	}
}

void	ft_loop(int *numbers, int alg, int n)
{
	int		i;

	while (alg)
	{
		while (numbers[alg] == (9 + alg - (n - 1)) && alg >= 0)
			alg -= 1;
		if (alg < 0)
			break ;
		numbers[alg] += 1;
		i = (alg + 1) - 1;
		while (i++ < n)
			numbers[i] = numbers[i - 1] + 1;
		alg = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		i = 0;
		while (i < n)
			ft_putchar(numbers[i++] + '0');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		if (c != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		c++;
	}
}
