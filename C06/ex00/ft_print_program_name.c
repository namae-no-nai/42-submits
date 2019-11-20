/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:48:26 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/21 11:15:00 by gbertho-         ###   ########.fr       */
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

	i = 0;
	if (argc == 1)
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			i++;
		}
	ft_putchar('\n');
	return (0);
}
