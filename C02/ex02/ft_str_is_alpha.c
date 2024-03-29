/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:19:57 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/11 18:25:45 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else if (*str >= 'A' && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}
