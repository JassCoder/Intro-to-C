/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 20:23:24 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/18 20:44:02 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char *src)
{
	char	*n_dest;

	n_dest = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (n_dest);
}
/*#include <stdio.h>
int	main()
{
	char	a[50] = "hello";
	char	b[] = " dflhsdufdsfsdfbsdrld";


	ft_strcat(a,b);
	printf("%s",a);

	return (0);
}*/
