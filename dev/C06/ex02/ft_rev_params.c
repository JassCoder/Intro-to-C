/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 02:09:07 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/26 04:13:15 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int c, char **v)
{
	int	j;
	int	k;

	j = c - 1;
	while (v[j] > v[0])
	{
		k = 0;
		while (v[j][k])
		{
			ft_putchar(v[j][k]);
			k++;
		}
		j--;
		ft_putchar('\n');
	}
	return (0);
}
