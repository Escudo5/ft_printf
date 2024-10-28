/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:53:46 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/28 14:42:50 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int nbr)
{
	int	printed_chars;

	printed_chars = 0;
	if (nbr > 9)
		printed_chars += ft_putnbru(nbr / 10);
	printed_chars += ((nbr % 10) + '0');
	return (printed_chars);
}
