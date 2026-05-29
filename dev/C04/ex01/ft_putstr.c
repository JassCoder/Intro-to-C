/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 09:05:54 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/19 09:14:22 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
#include <stdio.h>
int	main()
{
	char	a[] = "Hello World";
	ft_putstr(a);
	return (0);
}*/
