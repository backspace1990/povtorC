void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);

int main(void)
{
    int tab[10];
    int tab2[10];
    int *tabptr[2];

    tabptr[0] = tab; 
    tabptr[1] = tab2;
    //tabptr[1][3] =42;
    //*(tabptr[1]+3) =42;
    *(*(tabptr + 1)+3) =42;
    ft_putnbr(tab2[3]);
    ft_putchar('\n');
    ft_putnbr(tabptr[1][3]);
    ft_putchar('\n');   
    return (0);
}