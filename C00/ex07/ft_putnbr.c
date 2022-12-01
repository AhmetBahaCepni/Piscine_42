/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:30:41 by acepni            #+#    #+#             */
/*   Updated: 2022/07/24 13:47:28 by acepni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	calc_digit(int x)
{
	int	digit_count;

	digit_count = 0;
	while (x > 0)
	{
		x = x / 10;
		digit_count++;
	}
	return (digit_count + '0');
}

void	myprint(int nb, int arr[], int isend, int i)
{
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	while (!isend)
	{
		if (nb <= 9)
		{
			isend = 1;
			arr[i] = nb;
		}
		else
			arr[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(arr[i - 1] + '0');
		i--;
	}
}

void	ft_putnbr(int nb)
{	
	int	arr[10];
	int	isend;
	int	i;

	i = 0;
	isend = 0;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	myprint(nb, arr, isend, i);
}
