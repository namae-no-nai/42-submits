/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:34:11 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/17 17:32:16 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p;
	int		i;
	int		j;

	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			i = 1;
			while ((to_find[i] != '\0') && (str[j + i] == to_find[i]))
				i++;
			if (to_find[i] == '\0')
			{
				p = &str[j];
				return (p);
			}
		}
		j++;
	}
	return (0);
}
