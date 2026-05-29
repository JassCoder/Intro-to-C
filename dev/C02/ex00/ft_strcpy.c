/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 21:21:07 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/13 21:07:31 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char	src[] = "hello,world!!";
	char	dest[50];
	int	i = 0;
	int	size = sizeof(src) /sizeof(src[0]);

	while(i < size )
	{
		printf("%c",src[i]);
		i++;
	}
	printf("\n");

	ft_strcpy(dest,src);
	//int	dsize = sizeof(dest) / sizeof(dest[0]);
	int	j = 0;
	while (j < size - 1)
	{
		printf("%c",dest[j]);
		j++;
	}
	return (0);
}*/
