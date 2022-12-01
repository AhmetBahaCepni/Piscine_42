/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:39:13 by acepni            #+#    #+#             */
/*   Updated: 2022/07/21 19:58:30 by acepni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_alphabet(void)
{
	char	mychar;

	mychar = 'a';
	while (mychar <= 'z')
	{
		ft_putchar(mychar);
		mychar++;
	}
}
