/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:10:47 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/22 18:35:49 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define N 10

void	print(int tab[N][N])
{
	int		i;
	int		a;
	char	c;

	i = -1;
	while (++i < N)
	{
		a = -1;
		while (++a < N)
			if (tab[a][i])
			{
				c = '0' + a;
				write(1, &c, 1);
			}
	}
	write(1, "\n", 1);
}

int		check(int tab[N][N], int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < x)
		if (tab[i++][y])
			return (0);
	i = x;
	j = y;
	while (j >= 0 && i >= 0)
		if (tab[i--][j--])
			return (0);
	i = x;
	j = y;
	while (i >= 0 && j < N)
		if (tab[i--][j++])
			return (0);
	return (1);
}

int		backtrack(int tab[N][N], int x, int y, int *nbr)
{
	if (x >= N)
	{
		print(tab);
		*nbr += 1;
	}
	while (++y < N)
		if (check(tab, x, y))
		{
			tab[x][y] = 1;
			if (backtrack(tab, x + 1, -1, nbr))
				return (1);
			tab[x][y] = 0;
		}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int tab[N][N];
	int nbr;
	int b;

	nbr = -1;
	while (++nbr < N)
	{
		b = -1;
		while (++b < N)
			tab[nbr][b] = 0;
	}
	nbr = 0;
	backtrack(tab, 0, -1, &nbr);
	return (nbr);
}
