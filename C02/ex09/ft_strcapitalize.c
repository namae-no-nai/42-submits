/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 10:17:44 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/15 10:38:58 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_exceptions(char c);

char	*ft_strcapitalize(char *str)
{
	int i;
	int excep;

	i = 0;
	excep = 1;
	while (str[i] != '\0')
	{
		if (ft_exceptions(str[i]))
			excep = 1;
		else
		{
			if (excep == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			if (excep == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			excep = 0;
		}
		i++;
	}
	return (str);
}

int		ft_exceptions(char c)
{
	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z')
			&& !(c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
