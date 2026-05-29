/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 02:38:17 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/11 18:14:45 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 92;
	b = 8;
	ft_ultimate_div_mod(&a,&b);
	printf("div:%d\n",a);
	printf("mod:%d\n",b);
	return (0);
}*/
