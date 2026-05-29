/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 22:29:46 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/24 17:34:14 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	o;

	o = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (nb >= 2)
	{
		o *= nb;
		nb--;
	}
	return (o);
}
/*#include <stdlib.h>
#include <stdio.h>
int	main(int	c,char **v)
{
	int	nb;
	int	result;

	if (c == 2)
	{
		nb = atoi(v[1]);
		result = ft_iterative_factorial(nb);
		printf("factorial of %d is :%d \n" ,nb,result);
	}
	else if (c < 2)
	{
		printf("atleast two arguments \"program name\" \"input argument\"");
	}
	else
	{
		printf("add arguments");
	}
	return 0;
}*/
