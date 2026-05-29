/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 18:05:18 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/13 21:05:44 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int     main(void)
{
        char    src[] = "hello,world!!";
        char    dest[50];
        int     i = 0;
        int     size = sizeof(src) /sizeof(src[0]);

        while(i < size - 1)
        {
                printf("%c",src[i]);
                i++;
        }
        printf("\n");

        ft_strncpy(dest,src,5);
	dest[i] = '\0';

        //int     dsize = sizeof(dest) / sizeof(dest[0]);
        int     j = 0;
        while (j < size - 1)
        {
                printf("%c",dest[j]);
                j++;
        }
        return (0);
}*/
