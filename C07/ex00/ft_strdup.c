/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:00:22 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/24 13:56:28 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;

	while (src[len])
		len++;
	*s = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (src[len])
	{
		s[len] = src[len];
		len++;
	}
	s[i] = 0;
	return (s);
}
