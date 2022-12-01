/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:28:12 by acepni            #+#    #+#             */
/*   Updated: 2022/08/03 12:50:38 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int main(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcdef0asjghkjsadjfhg";
	
	printf("%d", ft_strcmp(str1, str2));
}
*/
