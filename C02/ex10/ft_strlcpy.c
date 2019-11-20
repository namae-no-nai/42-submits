/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:43:22 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/19 14:43:37 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int isize;

	i = 0;
	isize = size;
	while (i < isize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[isize - 1] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
