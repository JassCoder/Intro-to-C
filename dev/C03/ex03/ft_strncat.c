/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 22:39:48 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/18 23:15:23 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	char			*new_dest;
	unsigned int	i;

	new_dest = dest;
	i = 0;
	while (*dest)
	{
		dest++;
	}
	while (i < nb && *src)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (new_dest);
}
/*#include <stdio.h>
int	main()
{
	char	a[50] = "hello";
	char	b[] = "world_123";
	printf("%s",ft_strncat(a,b,2));
	return (0);
}*/
