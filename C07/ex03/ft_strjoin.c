/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 09:19:30 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/23 19:50:13 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		m;
	char	*ar;

	i = 0;
	m = slp(strs, size);
	ar = malloc(m + (size - 1 * sl(sep)) * sizeof(char));
	while (i < size)
	{
		cat(ar, strs[i]);
		if (i < size - 1)
			cat(ar, sep);
		i++;
	}
	return (ar);
}
