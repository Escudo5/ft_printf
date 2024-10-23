/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:54:17 by escudo5           #+#    #+#             */
/*   Updated: 2024/10/23 11:15:48 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long address;
	char hex_digits[] = "0123456789abcdef";
	char buffer[16];
	int i;
	i = 0;

	address = (unsigned long)ptr;
	write(1, "0x", 2);
	if (address == 0)
	{
		write(1, "0", 1);
		return (3);
	}
	while (address > 0)
	{
		buffer[i] = hex_digits[address % 16];
		address /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &buffer[i], 1);
	}
	return (i + 2);
}