/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:36:59 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/21 15:33:33 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexadec(unsigned int nbr)
{
	char	hex_digits[] = "0123456789abcdef";
	char	buffer[16];
	int		i;
	int		printed_chars;

	i = 0;
	printed_chars = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (nbr > 0)
	{
		buffer[i] = hex_digits[nbr % 16];
		nbr /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &buffer[i], 1);
		printed_chars++;
	}
	return (printed_chars);
}
