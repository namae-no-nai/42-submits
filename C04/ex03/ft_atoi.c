/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 13:33:57 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/21 11:41:10 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		a;
	long	result;
	int		signal;

	a = 0;
	result = 0;
	signal = 1;
	while ((str[a] == ' ') || (str[a] == '\f') || (str[a] == '\n') ||
	(str[a] == '\r') || (str[a] == '\t') || (str[a] == '\v'))
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			signal *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		result = result * 10 + (str[a] - '0');
		a++;
	}
	return (result * signal);
}
