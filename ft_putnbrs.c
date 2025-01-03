/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 23:10:36 by mtaybi            #+#    #+#             */
/*   Updated: 2025/01/02 10:32:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_len(int b)
{
	int	x;

	x = 0;
	while (b != 0)
	{
		b /= 10;
		x++;
	}
	return (x);
}

int	ft_putnbrs(int c)
{
	if (c == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (c < 0)
	{
		c *= -1;
		write(1, "-", 1);
		ft_putnbrs(c);
	}
	else if (c > 9)
	{
		ft_putnbrs(c / 10);
		ft_putnbrs(c % 10);
	}
	else if (c <= 9)
	{
		c += 48;
		write(1, &c, 1);
	}
	return (count_len(c));
}
