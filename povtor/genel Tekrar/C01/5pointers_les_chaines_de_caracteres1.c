void	ft_putchar(char c);
void	ft_putaddr(void *str);
void	ft_putnbr(int nb);

int main(void)
{
    char  *str;
    char  *str2;
    int i;
    int k;

    i = 0;
    str = "toto geldin totos gidiyorsun!!!";
    str2 = "ToTo GelDin toTos GidiYorSun!!!";
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
    ft_putchar('\n');
    while (i >= 0)
    {
        ft_putchar(str[i]);
        i--;
    }
    ft_putchar('\n');
    ft_putchar('\n');
    while (str[i]!='\0')
    {
        if((str[i]>="A" && str[i] <="Z") || ((str[i] >= "a" && str[i] <= "z")))
            ft_putchar(str[i]-32);
        else
            ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
    ft_putchar('\n');
    k = 0;
    while (str2[k] != '\0')
    {
        if((str2[k] >= "A" || str2[k] <= "Z"))
            ft_putchar(str2[k] + 32);
        else if((str2[k] >= "a" || str2[k] <= "z"))
            ft_putchar(str2[k] - 32);
        else
            ft_putchar(str2[k]);
        k++;
    }
    ft_putchar('\n');
    ft_putchar('\n');
    return (0);
}
//hata aliyorum bak