/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:43:13 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/14 16:51:06 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
int	main(void)
{
	printf("%d empty string\n", ft_str_is_lowercase(""));
	printf("%d all lowercase\n", ft_str_is_lowercase("hello"));
	printf("%d contains uppercase\n", ft_str_is_lowercase("heLlo"));
	printf("%d contains digits\n", ft_str_is_lowercase("hello123"));
	printf("%d contains special char\n", ft_str_is_lowercase("hello!"));
	printf("%d single lowercase\n", ft_str_is_lowercase("a"));
	printf("%d single uppercase\n", ft_str_is_lowercase("A"));
	return (0);
}
