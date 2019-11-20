/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:53:52 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/22 09:05:32 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		check_in_base(char c, char *base);

int		check_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		++i;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int n;
	int x;
	int sign;
	int i;

	i = 0;
	n = 0;
	x = 0;
	sign = 1;
	while (base[i] != '\0')
		++i;
	sign = ft_atoi(str);
	while (*str != '\0')
	{
		x = check_in_base(*str, base);
		if (x >= 0)
		{
			n = (n * i) + x;
		}
		str++;
	}
	return (n * sign);
}

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
	return (signal);
}
