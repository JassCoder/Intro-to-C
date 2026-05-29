/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:05:43 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/24 21:21:56 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (1);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int c, char **v)
{
	if (c == 2)
	{
		int	index = atoi(v[1]);
		int	result;
		result = ft_fibonacci(index);
		printf("At index of %d, fibonacci is : %d \n" , index, result);
	}
	else
	{
		printf("Atleast 2 arguments");
	}
	return 0;
}*/
