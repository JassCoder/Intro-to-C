/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 23:04:34 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/24 23:18:06 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i) < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int c, char **v)
{
	if (c == 2)
	{
		int	n = atoi(v[1]);
		int	result;
		result = ft_sqrt(n);
		printf("sqaure root of %d is : %d\n", n, result);
	}
	else
	{
		printf("Atleast two arguments needed :D");
	}
	return 0;
}*/
