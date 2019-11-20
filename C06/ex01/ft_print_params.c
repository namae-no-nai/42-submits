/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:49:08 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/20 17:12:48 by gbertho-         ###   ########.fr       */
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
	cn = 1;
	while (cn < argc)
	{
		while (argv[cn][i] != '\0')
		{
			ft_putchar(argv[cn][i]);
			i++;
		}
		ft_putchar('\n');
		cn++;
		i = 0;
	}
	return (0);
}
