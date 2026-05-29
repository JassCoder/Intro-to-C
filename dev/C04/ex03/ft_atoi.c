/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:47:26 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/20 18:32:13 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;
	int	check;

	num = 0;
	check = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			check++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (!(check % 2))
		return (num);
	return (-num);
}
#include <stdio.h>
int	main()
{
	char	*a = "   ---+--+1234ab567";
	printf("%d\n",ft_atoi(a));
	return (0);
}
