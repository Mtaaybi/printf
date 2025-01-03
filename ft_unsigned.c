/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 00:33:43 by mtaybi            #+#    #+#             */
/*   Updated: 2025/01/02 10:33:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_ulen(unsigned int b)
{
	int	counter;

	counter = 0;
	if (b == 0)
		return (1);
	while (b != 0)
	{
		b /= 10;
		counter++;
	}
	return (counter);
}

int	ft_unsigned(unsigned int u)
{
	unsigned int	u_len;

	u_len = u;
	if (u > 9)
	{
		ft_unsigned(u / 10);
		ft_unsigned(u % 10);
	}
	else if (u <= 9)
	{
		u += 48;
		write(1, &u, 1);
	}
	return (count_ulen(u_len));
}
