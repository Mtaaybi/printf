/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:27:03 by mtaybi            #+#    #+#             */
/*   Updated: 2025/01/03 21:05:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *indicateur, va_list arglist)
{
	if (*indicateur == '%')
		return (ft_putchars('%'));
	else if (*indicateur == 's')
		return (ft_string(va_arg(arglist, char *)));
	else if (*indicateur == 'c')
		return (ft_putchars(va_arg(arglist, int)));
	else if (*indicateur == 'd' || *indicateur == 'i')
		return (ft_putnbrs(va_arg(arglist, int)));
	else if (*indicateur == 'u')
		return (ft_unsigned(va_arg(arglist, unsigned int)));
	else if (*indicateur == 'X')
		return (ft_uphexa(va_arg(arglist, unsigned int)));
	else if (*indicateur == 'x')
		return (ft_minhexa(va_arg(arglist, unsigned int)));
	else if (*indicateur == 'p')
		return (ft_pointers(va_arg(arglist, void *)));
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			count += ft_format(&format[i + 1], args);
			i++;
		}
		else
			write(1, &format[i], 1);
		count++;
		i++;
	}
	va_end(args);
	return (count);
}
