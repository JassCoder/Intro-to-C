/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:03:03 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/18 19:22:46 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_strcmp("hello", "hello"));
	printf("%d\n",ft_strcmp("abc", "acb"));
	printf("%d\n",ft_strcmp("xyz", "abc"));
	return (0);
}*/
