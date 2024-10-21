/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:41:39 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/21 15:49:44 by smarquez         ###   ########.fr       */
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
		return (ft_putptr(va_arg(args, int)));
	else if (specifier == 'x')
		return (ft_hexadec(va_arg(args, int)));
	else if (specifier == 'X')
		return (ft_hexadec_u(va_arg(args, int)));
	else if (specifier == '%')
		return (ft_putchar('%'));
}
char	data_type(const char *format)
{
	return (*(format + 1));
}

int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	char	specifier;
	int		result;

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
