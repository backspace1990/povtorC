/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:55:58 by tgrandis          #+#    #+#             */
/*   Updated: 2021/06/27 15:49:55 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main()
{
	int		a;
	int		b;
	int		*ptr1;
	int		*ptr2;
	int 	c;
	
	a = 3;
	b = 42;
	printf("\n\ngirdigim a : %d\nve a nin yeri : %p\n", a, &a);
	printf("girdigim b : %d\nve b nin yeri : %p\n\n", b, &b);
	ptr1 = &a;
	printf("*ptr1(a atadim) degeri : %d\nve *ptr1(a atadim) yeri : %p\n", *ptr1, &ptr1);
	ptr2 = &b;
	printf("*ptr2(b atadim) degeri : %d\nve *ptr2(b atadim) yeri : %p\n\n", *ptr2, &ptr2);
	c = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = c;
	printf("son a degeri : %d ,son a nin yeri : %p\nve son b deger : %d ,ve son b nin yeri : %p\n\n", a, &a, b, &b);
	return (0);
}
