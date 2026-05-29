/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 23:25:25 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/24 23:39:07 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);

	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int c, char **v)
{
	if (c == 2)
	{
		int	n = atoi(v[1]);
		printf("1 for prime and 0 for non prime\n");
		printf("your input is %d :> %d\n",n,ft_is_prime(n));
	}
	else
	{
		printf("Atleast two arguments needed :D");
	}
	return 0;
}*/
