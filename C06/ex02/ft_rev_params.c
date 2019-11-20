/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:13:20 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/20 17:13:24 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int cn;

	i = 0;
	cn = argc - 1;
	while (cn >= 1)
	{
		while (argv[cn][i] != '\0')
		{
			ft_putchar(argv[cn][i]);
			i++;
		}
		ft_putchar('\n');
		cn--;
		i = 0;
	}
	return (0);
}
