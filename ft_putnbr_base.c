/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maderuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:14:37 by maderuel          #+#    #+#             */
/*   Updated: 2022/09/21 17:04:36 by maderuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_baselen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putc(char c)
{
	write(1, &c, 1);
}

int	check_base(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (*str == '\0' || ft_baselen(str) <= 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_baselen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	int		nb;

	nb = nbr;
	b = ft_baselen(base);
	if (check_base(base) == 0)
		return ;
	if (nb < 0)
	{
		ft_putc('-');
		nb *= -1;
	}
	if (nb >= b)
	{
		ft_putnbr_base(nb / b, base);
		ft_putnbr_base(nb % b, base);
	}
	else if (nb < b)
		ft_putc(base[nb]);
}
