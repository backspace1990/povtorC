/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:10:29 by tgrandis          #+#    #+#             */
/*   Updated: 2021/06/27 13:18:32 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void ft_putadress(void *ter)
{
    printf("%p\n",ter);
}

int		main()
{
	int		i;
	int		*adres;

	i = 3;
	adres = &i;
	printf("\ni'nin degeri : %d \nve adres pointersinin (atatanan i) degeri : %d", i, *adres);
	printf("\n\ni' nin yeri (adresi) : ");
	ft_putadress(&i);
	printf("adres pointersinin yeri(adresi) : " ); 
	ft_putadress(&adres);
	return (0);
}	
