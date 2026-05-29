/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 19:42:40 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/10 20:34:38 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	pc(char	c);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	a;
	int	b;
	char	c;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while(y <= 9)
		{
			a = 0;
			while(a <= 9)
			{
				b = 0;
				while (b <= 9)
				{
					pc(c = x + '0');
					pc(c = y + '0');
					pc(' ');
					pc(c = a + '0');
					pc(c = b + '0');
					b++;
				}
				a++;
			}
			y++;
		}
		x++;
	}
}

void	pc(char	c)
{
	write(1, &c, 1);
}
