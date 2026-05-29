/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:42:51 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/26 18:44:10 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char	*t;

	t = *s1;
	*s1 = *s2;
	*s2 = t;
}

int	ft_compare(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int c, char **v)
{
	int	i;
	int	j;

	i = 1;
	while (i < c)
	{
		j = i + 1;
		while (j < c)
		{
			if (ft_compare(v[i], v[j]) > 0)
			{
				ft_swap(&v[i], &v[j]);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < c)
	{
		ft_putstr(v[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
