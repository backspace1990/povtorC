#include <unistd.h>

void ft_putnum(int num)
{
    write(1, &num, 1);
}