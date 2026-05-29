/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 00:02:03 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/26 01:00:32 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
/*
int 	main(int c, char **v)
{
	if (c == 2)
	{
		int	n = atoi(v[1]);
		int	result = ft_find_next_prime(n);
		printf("your input:\033[31m%d\033[0m \n", n);
		printf("next prime number is :\033[31m%d\033[0m\n", result);
	}
	else
	{
		printf("Atleast two arguments needed :D\n");
	}
	return (0);
}*/
