/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:53:46 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/17 13:01:56 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
int ft_putnbru(unsigned int nbr)
{   
    if (nbr > 9)
       ft_putchar(nbr / 10);
    ft_putchar((nbr % 10) + '0');
}
