/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:41:39 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/23 11:23:24 by smarquez         ###   ########.fr       */
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
		return (ft_putptr(va_arg(args, void *)));
	else if (specifier == 'x')
		return (ft_hexadec(va_arg(args, int)));
	else if (specifier == 'X')
		return (ft_hexadec_u(va_arg(args, int)));
	else if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}

int	print_normal_char(const char *format)
{
	write(1, format, 1);
	return (1);
}

int	handle_specifier(const char **format, va_list vargs)
{
	int	result;

	result = 0;
	if (**format == '%' && *(*format + 1) == '%')
	{
		write(1, "%", 1);
		result++;
		*format += 2;
		return (1);
	}
	else if (**format == '%')
	{
		(*format)++;
		result = specifier_ft(**format, vargs);
		(*format)++;
	}
	return (result);
}

int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	char	specifier;
	int		result;

	result = 0;
	va_start(vargs, format);
	while (*format)
	{
		if (*format == '%')
			result += handle_specifier(&format, vargs);
		else
			result += print_normal_char(format);
		format++;
	}
	va_end(vargs);
	return (result);
}
