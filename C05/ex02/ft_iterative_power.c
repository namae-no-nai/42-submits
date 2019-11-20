/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:23:43 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/18 15:24:10 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int nb_p;

	if (power < 0)
		return (0);
	i = 0;
	nb_p = 1;
	while (i < power)
	{
		nb_p = nb_p * nb;
		i++;
	}
	return (nb_p);
}
