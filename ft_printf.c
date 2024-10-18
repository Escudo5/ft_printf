/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:41:39 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/18 12:52:11 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	specifier_ft(char specifier, va_list args)
{
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_putnbru(va_arg(args, int)));
	else if (specifier == 'p')
		
}
	char data_type(const char *format)
	{
		return (*(format + 1));
	}
	
int	ft_printf(char const *format, ...)
{
	va_list vargs;
	char specifier;
	int result;

	va_start(vargs, format);
	while (*format)
	{
		if (*format == '%')
		{
			specifier = data_type(format);
			format++;
			result += specifier_ft(specifier, vargs);
		}
	}
}
