#include <unistd.h>

char    *ft_reverse_str(char *str)
{
    int     lenght;
    int     k;

    lenght = 0;
    while(str[lenght] != 0)
    {
        lenght++;
    }
    k = lenght;
    while(k >= 0)
    {
        write(1, &str[k], 1);
        k--;
    }
    return(0);
}

int     main(void)
{
    ft_reverse_str("Salam");
    write(1, "\n", 1);
    ft_reverse_str("Popalam");
    write(1, "\n", 1);
    ft_reverse_str("Molekulam");
    write(1, "\n", 1);
}