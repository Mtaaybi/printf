/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 06:02:46 by marvin            #+#    #+#             */
/*   Updated: 2025/01/02 10:31:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_reverse(char *hexa)
{
	int	len;
	int	a;

	len = 0;
	a = 0;
	while (hexa[len] != '\0')
		len++;
	a = len;
	len--;
	write(1, "0x", 2);
	while (len >= 0)
	{
		write(1, &hexa[len], 1);
		len--;
	}
	return (a + 2);
}

int	ft_pointers(void *ptr)
{
	char				*hex;
	char				str[17];
	int					i;
	unsigned long long	address;

	hex = "0123456789abcdef";
	i = 0;
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	address = (unsigned long long)ptr;
	while (address != 0)
	{
		str[i] = hex[address % 16];
		address /= 16;
		i++;
	}
	str[i] = '\0';
	return (ft_reverse(str));
}
