/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aekinci <aekinci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:33:17 by aekinci           #+#    #+#             */
/*   Updated: 2022/08/07 13:54:55 by aekinci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (0);
	tab = (int *) malloc(sizeof(int) * (max - min));
	if (!tab)
		return (-1);
	else
	{
		i = 0;
		while (max - min > i)
		{
			tab[i] = min + i;
			i++;
		}
		*range = tab;
		return (i);
	}
}
