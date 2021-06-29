void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);

int main(void)
{
    int a;
    int b;
    int c;

    c =21;
    a = 3;
    b = 42;
    ft_putnbr(c);
    ft_putchar(' ');
    ft_putaddr(&c);
    ft_putchar('\n');
    ft_putnbr(a);
    ft_putchar(' ');
    ft_putaddr(&a);
    ft_putchar('\n');
    ft_putnbr(b);
    ft_putchar(' ');
    ft_putaddr(&b);
    ft_putchar('\n');
    return (0);
}