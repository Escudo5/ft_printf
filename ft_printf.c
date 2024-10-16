/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:41:39 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/16 14:02:09 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	char	specifier;
	int		num;

	va_start(vargs, format);
	while (*format)
	{
		if (*format == '%')
		{
			specifier = data_type(format);
			format++;
			if (specifier == 'd')
			{
				num = va_arg(vargs, int);
			}
		}
		else
	}
}

char	data_type(const char *format)
{
	return (*(format + 1));
}