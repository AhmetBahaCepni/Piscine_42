/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:56:10 by acepni            #+#    #+#             */
/*   Updated: 2022/08/07 12:01:19 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
	return (-1);
}
/*
#include <stdio.h>

int main()
{
	printf("%d",ft_fibonacci(-7));
}
*/
