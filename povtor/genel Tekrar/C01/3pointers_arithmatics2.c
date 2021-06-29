void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);

int main(void)
{
    char a;
    char b;
    char *ptr;

    a = '3';
    b = 'o';
    ptr = &b;
    ft_putchar('P');
    ft_putchar('+');
    ft_putchar('1');
    ft_putchar(' ');
    ft_putchar(':');
    ft_putchar(' ');
    ft_putchar(*(ptr + 1));
    ft_putchar(' ');
    ft_putaddr(ptr + 1);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('b');
    ft_putchar(' ');
    ft_putchar(':');
    ft_putchar(' ');
    ft_putchar(b);
    ft_putchar(' ');
    ft_putaddr(&b);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('P');
    ft_putchar(' ');
    ft_putchar(':');
    ft_putchar(' ');
    ft_putchar(*ptr);
    ft_putchar(' ');
    ft_putaddr(ptr);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('a');
    ft_putchar(' ');
    ft_putchar(':');
    ft_putchar(' ');
    ft_putchar(a);
    ft_putchar(' ');
    ft_putaddr(&a);
    ft_putchar('\n');
    return (0);
}