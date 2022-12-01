/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:45:07 by acepni            #+#    #+#             */
/*   Updated: 2022/07/25 19:49:52 by acepni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	my_holder;

	i = 0;
	while (i < size / 2)
	{
		my_holder = tab[i];
		tab [i] = tab[size - 1 - i];
		tab[size - 1 - i] = my_holder;
		i++;
	}
}
