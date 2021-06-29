void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);
int     ft_strlen(char *s);


int main(void)
{
    char  *str;
    int k;

    str = "To/t/o 1/2 3   ";
    k = ft_strlen(str);
    while(k >= 0)
    {
        if(str[k] == ' ' || str[k] == '/')
        {
            k--;
        }
        if(str[k] != ' ')
        {
            ft_putchar(str[k]);
        }
        k --;
    }
    ft_putchar('\n');
    return (0);
}