/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:49:42 by acepni            #+#    #+#             */
/*   Updated: 2022/08/04 15:54:38 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	find_signs(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = find_signs(str);
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	nb *= sign;
	return (nb);
}

/*
#include <stdio.h>

int main()
{
    char    my_char[] = " ---+--+1234ab567";
    
    printf("%d", ft_atoi(my_char));
}
*/
