/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aekinci <aekinci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:47:38 by aekinci           #+#    #+#             */
/*   Updated: 2022/08/07 13:50:18 by aekinci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*dest;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	i = (max - min);
	dest = (int *) malloc(sizeof(int) * i);
	if (!dest)
		return (0);
	else
	{
		i = 0;
		while (min + i < max)
		{
			dest[i] = min + i;
			i++;
		}
	}
	return (dest);
}
