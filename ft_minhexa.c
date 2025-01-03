/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minhexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 06:02:37 by mtaybi            #+#    #+#             */
/*   Updated: 2025/01/02 10:36:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_reversex(char *hexa)
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

int	ft_minhexa(unsigned int x)
{
	char	*hex;
	char	str[16];
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (x != 0)
	{
		str[i] = hex[x % 16];
		x /= 16;
		i++;
	}
	str[i] = '\0';
	return (ft_reversex(str));
}
