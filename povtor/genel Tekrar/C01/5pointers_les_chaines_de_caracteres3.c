#include <unistd.h>
void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);
int     ft_strlen(char *s);
int	    ft_putnbr2(int nb);



int main(void)
{
    char  str[]="F A T/M A";
    int k;
    // int i;

    k = 0;
    str[0] = 'K';
    while(str[k] != '\0')
    {
        if(str[k] == ' ' || str[k] == '/')
        {
            k++;
        }
        if(str[k] != ' ')
        {
            ft_putchar(str[k]);
        }
        k ++;
    }
    // i = ft_putnbr2(ft_strlen(str));
    // while(i >= 0)
    // {
    //     if(str[i] == ' ' || str[i] == '/')
    //     {
    //         i--;
    //     }
    //     if(str[i] != ' ')
    //     {
    //         ft_putchar(str[i]);
    //     }
    //     i ++;
    // }
    ft_putchar('\n');
    write(1, &str, ft_strlen(str));
    ft_putchar('\n');
    ft_putnbr(ft_strlen(str));
    ft_putchar('\n');
    return (0);
}

//daha tamamlanmadi!