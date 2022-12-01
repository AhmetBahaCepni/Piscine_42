/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 03:04:23 by acepni            #+#    #+#             */
/*   Updated: 2022/08/01 18:39:41 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hexadecimal(char x)
{
	char	a;
	char	b;

	a = (x / 16 + '0');
	b = "0123456789abcdef"[x % 16];
	write(1, "\\", 1);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			print_hexadecimal(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

/*
int main()
{
    char mystr[] = "Coucou\ntu vas bien ?";
    
    ft_putstr_non_printable(mystr);
}
*/
