/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 19:53:02 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/14 20:29:05 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char	src[] = "abcdefghijklmnopqrstwxyz";
	int	size = sizeof(src) / sizeof(src[0]);
	int i = 0;
	printf("orginal array  :");
	while (i < size)
	{
		printf("%c",src[i]);
		i++;
	}
	printf("\n");
	printf("upper case     :");
	printf("%s \n",ft_strupcase(src));
	return (0);
}*/
