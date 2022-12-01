/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:46:36 by acepni            #+#    #+#             */
/*   Updated: 2022/07/27 15:46:47 by acepni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_index(int *i, int *j)
{
	int	my_holder;

	my_holder = *i;
	*i = *j;
	*j = my_holder;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	end;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
				swap_index(&tab[i], &tab[j]);
			else
				j++;
		}
		i++;
	}
}
