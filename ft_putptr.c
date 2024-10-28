/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:54:17 by escudo5           #+#    #+#             */
/*   Updated: 2024/10/28 15:01:31 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	char			hex_digits[] = "0123456789abcdef";
	int				printed_chars;

	address = (unsigned long)ptr;
	if (!address)
		return (write(1, "0x0", 3));
	printed_chars = write(1, "0x", 2);
	while (address)
	{
		printed_chars++;
		write(1, &hex_digits[address % 16], 1);
		address /= 16;
	}
	return (printed_chars);
}
