/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 17:03:03 by tgrandis          #+#    #+#             */
/*   Updated: 2021/06/27 17:07:33 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putnum(int num)
{
    write(1, &num, 1);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putadress(void *ter)
{
    printf("%p\n",ter);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int		main()
{
	char		a;
	char		b;
	char 		*ptr;

	a = '3';
	b = 'o';
	ptr = &b;
	ft_putadress(&b);
	ft_putchar('\n');
	ft_putadress(ptr + 1);
	ft_putchar('\n');
	ft_putchar(*(ptr + 1)); // ft_putnum(*(ptr + 1)) yazilinca ascii deki 3 sayi degerini(53) yazdiriyor!!
	ft_putchar('\n');
	return (0);
}
