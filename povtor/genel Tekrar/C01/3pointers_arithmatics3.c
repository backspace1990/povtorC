void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);

int main(void)
{
    int a;
    int b;
    int *ptr;

    a = 1;
    b = 42;
    ptr = &b;
    ft_putchar('P');
    ft_putchar('+');
    ft_putchar('a');
    ft_putchar(' ');
    ft_putchar(':');
    ft_putchar(' ');
    ft_putnbr(*(ptr + a));
    ft_putchar(' ');
    ft_putaddr(ptr + a);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('b');
    ft_putchar(' ');
    ft_putchar(':');
    ft_putchar(' ');
    ft_putnbr(b);
    ft_putchar(' ');
    ft_putaddr(&b);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('P');
    ft_putchar(' ');
    ft_putchar(':');
    ft_putchar(' ');
    ft_putnbr(*ptr);
    ft_putchar(' ');
    ft_putaddr(ptr);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('a');
    ft_putchar(' ');
    ft_putchar(':');
    ft_putchar(' ');
    ft_putnbr(a);
    ft_putchar(' ');
    ft_putaddr(&a);
    ft_putchar('\n');
    return (0);
}