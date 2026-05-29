/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 20:13:39 by jsingh            #+#    #+#             */
/*   Updated: 2026/05/23 17:51:40 by jsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//! put char for printing symbol only;
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//! this function counts only length of the string 
int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//! this fucnction check the base symbols what we are giving , if base is '+' or '-' or is not between 32 means '0' and 126 means '~' then return 0 end program.
int	ft_check_base(char	*base)
{
	int	i;
	int	j;
//! here we use string length funtion to calculate the length of the base we provide , in this exercise i hard coded but when will do this with command line arguments then we need to check the base symbols has enough values like if base value is 1 , then we cant represent any thing with on one symbol , we need atleast 2 (binary base) 
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	box[32];
	long	n;
	int		size;
	int		i;

	if (!(ft_check_base(base)))
		return ;
	size = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	i = 0;
	while (n > 0)
	{
		box[i] = base[n % size];
		n = n / size;
		i++;
	}
	while (--i >= 0)
	{
		ft_putchar(box[i]);
	}
}
/*int	main(void)
{
	int	n = 42;
	char	*hex = "0123456789abcdef"; //! base value 16 means 15 characters or symbols;
 	char	*oct = "012345678"; //! base value 8 means only 8 char's and symbols;
	char	*dec = "0123456789"; //! base value 9 means 9 so later 9 we go double digits like 10,11 so we need hexadecimal; 
	char	*bin = "01"; //! base value 2 only 2 symbols is can be anything like 10 xy ab under base check rules;

	write(1 , "decimal to decimal:", 20);
	ft_putnbr_base(n,dec);
	write(1, "\ndecimal to binary: ",20);
	ft_putnbr_base(n,bin);
	write(1, "\ndecimal to octal: ",20);
	ft_putnbr_base(n,oct);
	write(1, "\ndecimal to hexadecimal: ", 26);
	ft_putnbr_base(n,hex);
	write(1,"\n",1);
}*/