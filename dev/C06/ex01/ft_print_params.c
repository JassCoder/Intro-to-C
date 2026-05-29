/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 23:20:22 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/21 23:20:25 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	k;

	(void)argc;
	j = 1;
	while (argv[j])
	{
		k = 0;
		while (argv[j][k])
		{
			ft_putchar(argv[j][k]);
			k++;
		}
		j++;
		ft_putchar('\n');
	}
	return (0);
}
