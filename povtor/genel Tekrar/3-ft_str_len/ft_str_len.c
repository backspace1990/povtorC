#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

int main(void)
{
    printf("Salam lenght : %d\n", ft_strlen("Salam"));
    printf("Popalam lenght : %d\n", ft_strlen("Popalam"));
    printf("Molekulam lenght : %d\n", ft_strlen("Molekulam"));
    return (0);
}