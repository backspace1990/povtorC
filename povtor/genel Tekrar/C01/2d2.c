/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:36:06 by tgrandis          #+#    #+#             */
/*   Updated: 2021/06/27 14:42:49 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main()
{
	int		i;
	int		*adres;
	int		**adres2;
	int		***adres3;
	int		****adres4;

	i = 42;
	adres = &i;
	adres2 = &adres;
	adres3 = &adres2;
	adres4 = &adres3;
	printf("ilk i degerim : %d\n", i);
	printf("i yi aktardigim *adres degerim : %d\n", *adres);
	printf("i yi aktardigim **adres2 degerim : %d\n", **adres2);
	printf("i yi aktardigim ***adres3 degerim : %d\n", ***adres3);
	printf("i yi aktardigim ****adres4 degerim : %d\n", ****adres4);
	return (0);
}
