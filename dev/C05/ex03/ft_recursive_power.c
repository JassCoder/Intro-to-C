/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:29:36 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/24 20:02:26 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}
/*#include <stdio.h>
#include <stdlib.h>

int     main(int c, char **v)
{
        if (c == 3)
        {
                int     nb = atoi(v[1]);
                int     power = atoi (v[2]);
                int     result;

                result = ft_recursive_power(nb, power);
                printf("%d raise to %d is : %d ", nb, power, result);
        }
        else
        {
                printf("Atleast two agrument followed by program name\n");
                printf("For example => ./a.out \"number\" \" power\"");
        }
        return 0;
}*/
