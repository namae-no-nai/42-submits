/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:27:06 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/21 11:25:57 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb > 2)
		return (0);
	while (i < nb / 2)
	{
		i += 2;
		if (nb % i == 0)
			return (0);
	}
	return (1);
}