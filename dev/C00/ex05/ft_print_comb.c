/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 23:09:26 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/10 19:28:29 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		x;
	int		y;
	int		z;
	char	c;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_putchar(c = x + '0');
				ft_putchar(c = y + '0');
				ft_putchar(c = z + '0');
				if (!(x == 7 && y == 8 && z == 9))
				{
					write(1, ", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
