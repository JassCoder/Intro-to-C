/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:56:16 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/24 19:30:40 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	o;

	o = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		o = o * nb;
		power--;
	}
	return (o);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int c, char **v)
{
	if (c == 3)
	{
		int	nb = atoi(v[1]);
		int	power = atoi (v[2]);
		int	result;

		result = ft_iterative_power(nb, power);
		printf("%d raise to %d is : %d ", nb, power, result);
	}
	else
	{
		printf("Atleast two agrument followed by program name\n");
		printf("For example => ./a.out \"number\" \" power\"");
	}
	return 0;
}*/
