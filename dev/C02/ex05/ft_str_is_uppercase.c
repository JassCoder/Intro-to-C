/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:52:26 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/14 17:04:08 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d empty string\n", ft_str_is_uppercase(""));
	printf("%d all uppercase\n", ft_str_is_uppercase("HELLO"));
	printf("%d contains lowercase\n", ft_str_is_uppercase("Hello"));
	printf("%d contains digits\n", ft_str_is_uppercase("HELLO123"));
	printf("%d contains special char\n", ft_str_is_uppercase("HELLO!"));
	printf("%d single uppercase\n", ft_str_is_uppercase("A"));
	printf("%d single lowercase\n", ft_str_is_uppercase("a"));
	return 0;
}*/
