/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:03:50 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/22 17:03:56 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int a;
	int temp;

	a = 2;
	temp = 0;
	if (nb <= 1)
		return (2);
	while (a < nb / a && temp == 0)
	{
		if (nb % a == 0)
			temp++;
		a++;
	}
	if (temp == 0)
		return (nb);
	else
		nb = ft_find_next_prime(++nb);
	return (nb);
}
