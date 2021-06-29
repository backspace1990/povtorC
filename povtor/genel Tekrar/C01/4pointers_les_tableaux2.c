void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);

int main(void)
{
    int tab[10];
    int *ptr;

    ptr = tab;
    *(ptr + 3) = 967;
    ft_putaddr(tab);
    ft_putchar(' ');
    ft_putnbr(tab[3]);
    ft_putchar('\n');
    
    return (0);
}