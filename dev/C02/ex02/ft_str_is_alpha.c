/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 21:10:37 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/14 23:09:52 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int    main(void)
{
      // Test empty string
      printf("Empty string: %d (expected: 1)\n", ft_str_is_alpha(""));
      
      // Test alphabetic strings
      printf("fail 'Hello': %d (expected: 1)\n", ft_str_is_alpha("Hello"));
      printf("fail 'abcXYZ': %d (expected: 1)\n", ft_str_is_alpha("abcXYZ"));
      
      // Test non-alphabetic strings
      printf("pass 'Hello123': %d (expected: 0)\n", ft_str_is_alpha("Hello123"));
      printf("pass 'test!': %d (expected: 0)\n", ft_str_is_alpha("test!"));
      printf("pass '42': %d (expected: 0)\n", ft_str_is_alpha("42"));
      printf("pass ' ': %d (expected: 0)\n", ft_str_is_alpha("abcghij[`aBCZ"));
      
    return (0);
}*/
