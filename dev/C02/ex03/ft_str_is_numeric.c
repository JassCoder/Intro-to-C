/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:15:15 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/14 16:40:33 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d empty \n",ft_str_is_numeric(""));
	printf("%d number\n",ft_str_is_numeric("12345"));
	printf("%d number and character\n",ft_str_is_numeric("123abc"));
	printf("%d only number\n",ft_str_is_numeric("7"));
	printf("%d only character\n",ft_str_is_numeric("x"));
	printf("%d number character number\n",ft_str_is_numeric("123a123"));
	printf("%d number and character\n",ft_str_is_numeric("123!"));
	printf("%d number space number\n",ft_str_is_numeric("123 123"));
	printf("%d space and then number\n",ft_str_is_numeric(" 123"));
	printf("%d space\n",ft_str_is_numeric(" "));
	return (0);
}*/
