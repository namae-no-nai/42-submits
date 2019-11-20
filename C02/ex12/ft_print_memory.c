/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:37:17 by gbertho-          #+#    #+#             */
/*   Updated: 2019/10/17 09:14:09 by gbertho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		ft_putchar(char c);

static void	print_hex(int i, unsigned int size, unsigned char *p);

void		*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned char	*p;

	str = "0123456789abcdef";
	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_hex(i, size, p);
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (*(p + i + j) >= 32 && *(p + i + j) <= 126)
				ft_putchar((char)*(p + i + j));
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i += 16;
	}
	return (0);
}

static void	print_hex(int i, unsigned int size, unsigned char *p)
{
	char			*str;
	unsigned int	j;

	j = 0;
	str = "0123456789abcdef";
	while (j < 16 && i + j < size)
	{
		ft_putchar((char)str[(*(p + i + j) / 16) % 16]);
		ft_putchar((char)str[*(p + i + j) % 16]);
		if (j % 2)
			ft_putchar(' ');
		j += 1;
	}
	while (j < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (j % 2)
			ft_putchar(' ');
		j += 1;
	}
}

char		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
