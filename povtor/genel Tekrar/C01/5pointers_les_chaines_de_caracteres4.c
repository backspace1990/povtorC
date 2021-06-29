#include <unistd.h>
void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);
int     ft_strlen(char *s);




int main(void)
{
    // char    *ptr;
    char    *ptr2;
    int     lenstr;

    // ptr2 = "lol";
    // ptr = "Kek Cheburek";
    // ptr = ptr2;
    // ft_putchar(ptr[1]);
    // ft_putchar('\n');  //1.adim anlasildi
    ptr2 = "Kek lol Cheburek";
    lenstr = ft_strlen(ptr2);
    while(lenstr >= 0)
    {
        ft_putchar(ptr2[lenstr]);
        lenstr--;
    }
    ft_putchar('\n'); //2. adim yedi
    return (0);
}