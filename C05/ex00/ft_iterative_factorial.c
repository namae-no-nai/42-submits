/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:22:59 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/18 15:23:07 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int nb_factorial;

	i = 1;
	nb_factorial = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		nb_factorial = nb_factorial * (nb - i + 1);
		i++;
	}
	return (nb_factorial);
}
