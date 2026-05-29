/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 00:12:37 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/19 20:11:27 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	char	*x;
	char	*y;

	if (*to_find == '\0')
		return ((char *)str);
	while (*str)
	{
		x = str;
		y = to_find;
		while (*x && *y && (*x == *y))
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return ((char *)str);
		str++;
	}
	return (0);
}
#include<stdio.h>
int	main()
{
	char	a[] = "hello i am in love with you";
	char	b[] = "love";

	printf("%s",ft_strstr(a,b));
	return (0);
}
