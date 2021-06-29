void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);

int main(void)
{
    char c;
    
    c = '*';
    ft_putnbr(c);
    ft_putchar('\n');
    return (0);
}