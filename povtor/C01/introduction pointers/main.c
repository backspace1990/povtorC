void    ft_putchar(char c);
void    ft_putnum(int num);
void    ft_putadress(void *ptr);

int main(void)
{
    int     a;
    char    c;
    int     *ptr;
    char    *ptr1;


    a = 3;
    c = 'b';
    ptr = &a;
    ft_putadress(ptr);
    ptr1 = &c;
    ft_putadress(ptr1);



    return 0;
}
