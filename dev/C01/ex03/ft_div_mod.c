/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 00:06:18 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/11 18:18:49 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 10;
	b = 3;
	ft_div_mod(a,b,&c,&d);
	printf("quotient of a to b is:	%d\n",c);
	printf("remainder of a to b is:	%d\n",d);
	return (0);
}*/
