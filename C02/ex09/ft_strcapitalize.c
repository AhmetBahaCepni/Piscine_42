/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 02:32:33 by acepni            #+#    #+#             */
/*   Updated: 2022/08/01 18:39:10 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && 'a' <= str[i] && str[i] <= 'z')
		{
				str[i] -= 32;
				j++;
		}
		else if ('A' <= str[i] && str[i] <= 'Z' && j != 0)
		{
			str[i] += 32;
			j++;
		}
		else if (str[i] < '0' || ('9' < str[i] && str[i] < 'A')
			|| ('Z' < str[i] && str[i] < 'a' ) || 'z' < str[i])
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "salut, comment tu vas ? 42m* ots quarante-deux; cinquante+et+un";
	printf("%s",ft_strcapitalize(str1));
}
*/
