/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 03:43:37 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/12 20:24:08 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		ft_swap(&tab[a], &tab[b]);
		a++;
		b--;
	}
}
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	int	arr[] = {0,1,2,3,4,5,6,7,8};
	int	length = sizeof(arr) / sizeof(arr[0]);
	int	j;
	printf("orignal  array:");
	for(j = 0; j < length ;j++)
	{
		printf(" %d",arr[j]);
	}
	printf("\n");
	ft_rev_int_tab(arr, length);
	printf("reversed array:");
	int i = 0; 
	while(i < length)
	{
		printf(" %d",arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
