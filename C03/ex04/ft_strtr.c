/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 07:59:44 by acepni            #+#    #+#             */
/*   Updated: 2022/08/02 16:54:35 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	my_check(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while (to_find[j] != '\0')
	{
		if (to_find[j] != str[i])
			return (0);
		i++;
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (my_check(str, to_find, i))
				return (&str[i]);
		}
		i++;
	}
	return ("");
}

/*
#include <stdio.h>

int main(void)
{
	char	str[] = "Bilgisayar";
	char 	to_find[] = "is";

	printf("%s", ft_strstr(str, to_find));
}
*/
