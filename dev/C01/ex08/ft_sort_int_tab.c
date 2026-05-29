/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 16:41:38 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/12 20:22:13 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size -1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/*int	main(void)
{
	int	arr[10];
	int	i;
	int	n = 10;
	
	//! random seed value using time as reference for rand() operattor to use .
	srand((unsigned	int)time(NULL));

	i = 0;
	//! printing orignal array
	printf("orignal array:	");
	
	while (i < 10)
	{
		int	random = rand() % (n + 1);
		arr[i] = random;
		printf(" %d", arr[i]);
		i++;
	}
	//! now sorting array into ascending order.
	ft_sort_int_tab(arr, 10);
	printf("\n");
	printf("sorted  array:	");

	int nw = 0;
	while (nw < 10)
	{
		printf(" %d",arr[nw]);
		nw++;
	}
	printf("\n");
	return (0);

}*/
