#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
#include <stddef.h>



int ft_putnbr(int nb);
char	*ft_putstr(char *s);
char ft_putchar(int c);
int ft_putnbru(unsigned int nbr);
int	ft_putptr(void *ptr);
int	ft_hexadec(unsigned int nbr);
int	ft_hexadec_u(unsigned int nbr);













#endif