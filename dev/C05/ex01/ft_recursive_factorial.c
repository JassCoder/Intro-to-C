/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:13:37 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/24 18:51:32 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	i = ft_recursive_factorial(nb - 1) * nb;
	return (i);
}
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int	c, char	**v)
{
	if (c == 2)
	{
		int	nb; 
		int	result;
		nb = atoi(v[1]);
		result = ft_recursive_factorial(nb);
		printf("%d",result);
	}
	else
	{
		printf("Atleast one agrument after program name");
	}
	return 0;

}*/
