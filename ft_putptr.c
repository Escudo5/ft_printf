/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:54:17 by escudo5           #+#    #+#             */
/*   Updated: 2024/10/28 15:31:03 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	char			hex_digits[] = "0123456789abcdef";
	int				printed_chars;
	int				i;

	address = (unsigned long)ptr;
	printed_chars = write(1, "0x", 2);
	if (!address)
		return (printed_chars + write(1, "0", 1));
	i = 0;
	while (address)
	{
		i = (address % 16);
		printed_chars += write(1, &hex_digits[i], 1);
		address /= 16;
	}
	return (printed_chars);
}

