/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 08:43:43 by acepni            #+#    #+#             */
/*   Updated: 2022/08/04 15:49:27 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_arr(int *arr, int i)
{
	i--;
	while (i >= 0)
	{
		ft_putchar(arr[i] + '0');
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int	arr[10];
	int	i;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		arr[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	ft_print_arr(arr, i);
}

/*
int main(void)
{
    ft_putnbr(56473);
}
*/
