/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 09:16:54 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/24 14:02:47 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	long	test;
	int		*res;

	i = 0;
	test = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	res = malloc(sizeof(*res) * (max - min));
	if (res == 0)
		return (-1);
	while (min + i < max)
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (test);
}
