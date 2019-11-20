/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 08:35:27 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/09 14:39:31 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int inverse[size];
	int i;

	i = 0;
	while (i < size)
	{
		inverse[size -1 - i] = tab[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		*(tab + i) = inverse[i];
		i++;
	}	
}	

