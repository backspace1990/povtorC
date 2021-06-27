/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1d2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:39:30 by tgrandis          #+#    #+#             */
/*   Updated: 2021/06/27 11:44:58 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_nputchar(char c, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
	return (0);
}

int		main(void)
{
	ft_nputchar('@', 42);
	ft_putchar('\n');
	return (0);
}
