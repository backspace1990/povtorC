void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);

int main(void)
{
    int tab[10];
    
    tab[0] = 42;
    tab[3] =21;
    ft_putaddr(tab);
    ft_putchar(' ');
    ft_putnbr(tab[0]);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_putaddr(tab);
    ft_putchar(' ');
    ft_putnbr(tab[3]);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_putaddr(tab);
    ft_putchar(' ');
    ft_putnbr(tab[2]);
    ft_putchar('\n');
    
    return (0);
}