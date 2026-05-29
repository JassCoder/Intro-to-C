/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:21:26 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/18 20:06:16 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	o1;
	unsigned char	o2;

	i = 0;
	while (i < n && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	o1 = (unsigned char)*s1;
	o2 = (unsigned char)*s2;
	return (o1 - o2);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n",ft_strncmp("hello world" , "hello  world", 5));
	printf("%d\n",ft_strncmp("hlo world" , "hello  world", 5));
	printf("%d\n",ft_strncmp("llo world" , "helo  world", 5));
	printf("%d\n",ft_strncmp("ello world" , "hel  world", 5));
	return (0);
}*/

#include <stdio.h>
#include <string.h>
int main()
{
    unsigned int i = 3;
    char s1[] = "ppi";
    char s2[] = "ppp";

    printf("output of the string.h function:    %d\n", strncmp(s1, s2, i));
    printf("output of my function:          %d\n", ft_strncmp(s1, s2, i));
}
