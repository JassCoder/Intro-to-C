/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:54:03 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/11 22:40:37 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
/*#include <stdio.h>
int	main(void)
{
	char	a[] = "hello_world";
	int	count = ft_strlen(a);
	printf("this string is :%d long",count);
	return (0);
}*/
