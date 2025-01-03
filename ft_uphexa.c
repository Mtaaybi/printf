/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 01:17:06 by mtaybi            #+#    #+#             */
/*   Updated: 2025/01/02 10:36:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_reversexy(char *hexa)
{
	int	len;
	int	a;

	len = 0;
	a = 0;
	while (hexa[len] != '\0')
	{
		len++;
	}
	a = len;
	len--;
	while (len >= 0)
	{
		write(1, hexa + len, 1);
		len--;
	}
	return (a);
}

int	ft_uphexa(unsigned int X)
{
	char	*hex;
	char	str[17];
	int		i;

	hex = "0123456789ABCDEF";
	i = 0;
	if (X == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (X != 0)
	{
		str[i] = hex[X % 16];
		X /= 16;
		i++;
	}
	str[i] = '\0';
	return (ft_reversexy(str));
}
