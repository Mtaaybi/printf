/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:32:10 by marvin            #+#    #+#             */
/*   Updated: 2025/01/02 10:32:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_format(const char *indicateur, va_list arglist);
int	ft_string(char *str);
int	ft_putchars(int c);
int	ft_putnbrs(int c);
int	ft_unsigned(unsigned int u);
int	ft_uphexa(unsigned int X);
int	ft_minhexa(unsigned int x);
int	ft_pointers(void *ptr);

#endif