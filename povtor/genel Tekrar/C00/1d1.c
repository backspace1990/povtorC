/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1d1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:21:24 by tgrandis          #+#    #+#             */
/*   Updated: 2021/06/27 10:25:54 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	ft_putchar('a');
	ft_putchar('d');
	ft_putchar('\n');//write(1, "\n", 1); -- yazabilirdim cunku kutuphanem dahil edilmisti!
	return (0);
}
