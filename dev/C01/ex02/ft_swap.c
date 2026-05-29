/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:45:20 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/11 00:00:17 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*#include <stdio.h>
int	main(void)
{	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("old_A:%d\n",a);
	printf("old_b:%d\n",b);
	ft_swap(&a,&b);
	printf("new_A:%d\n",a);
	printf("new_b:%d\n",b);
	return (0);
}*/
