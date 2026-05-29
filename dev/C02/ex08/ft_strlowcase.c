/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 20:30:59 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/14 20:37:11 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int     main()
{
        char    src[] = "ABCDEFGHIJKLMNOPQRSTWXYZ";
        int     size = sizeof(src) / sizeof(src[0]);
        int i = 0;
        printf("orginal array  :");
        while (i < size)
        {
                printf("%c",src[i]);
                i++;
        }
        printf("\n");
        printf("lower case     :");
        printf("%s \n",ft_strlowcase(src));
        return (0);
}*/
