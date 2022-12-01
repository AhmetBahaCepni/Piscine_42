/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:40:19 by acepni            #+#    #+#             */
/*   Updated: 2022/08/08 10:20:21 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		total = 1;
		while (nb > 1)
		{
			total = total * nb;
			nb--;
		}
		return (total);
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
    printf("%d", ft_iterative_factorial(5));
    return 0;
}
*/
