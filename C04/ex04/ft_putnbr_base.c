/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:46:13 by acepni            #+#    #+#             */
/*   Updated: 2022/08/06 15:00:32 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	my_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == 0 || str[1] == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] || str[j] == 43 || str[j] == 45)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	my_print(int nb, char *base, int *arr)
{
	long	nbr;
	int		i;
	int		x;

	nbr = nb;
	x = str_len(base);
	i = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	while (nbr != 0)
	{
		arr[i] = nbr % x;
		nbr = nbr / x;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(base[arr[i]]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	arr[100];

	if (my_check(base))
	{
		my_print(nbr, base, arr);
	}
}

/*
#include <stdio.h>

int main()
{
    ft_putnbr_base(-101010, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(31, "poneyvif");
	printf("\n");
	ft_putnbr_base(2147483647, "012");
	printf("\n");
	ft_putnbr_base(59, "012");
}
*/
