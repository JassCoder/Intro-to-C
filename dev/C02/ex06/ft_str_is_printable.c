/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:05:24 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/14 23:13:11 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	i;

	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
int	main(void)
{
	printf("%d = hello\n", ft_str_is_printable("Hello"));
	printf("%d = hello \\n \n", ft_str_is_printable("Hello\n"));
	printf("%d = ABC123!!\n", ft_str_is_printable("ABC123!"));
	printf("%d = \"empty\" \n", ft_str_is_printable(""));
	printf("%d = tab\\t here\n", ft_str_is_printable("Tab\tHere"));
	printf("%d = space ~ \n", ft_str_is_printable(" ~"));
	return 0;
}
