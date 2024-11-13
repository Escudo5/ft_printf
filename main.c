#include "ft_printf.h"
#include <stdlib.h>

int main(void)
{
    ft_printf("ft_printf: hola%");
    write(1, '\n' , 1);
    printf("printf: hola%");
}