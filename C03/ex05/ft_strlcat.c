/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 07:29:39 by acepni            #+#    #+#             */
/*   Updated: 2022/08/02 16:51:59 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_str_len(char *my_str)
{
	unsigned int	i;

	i = 0;
	while (my_str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destsize;
	unsigned int	srcsize;

	destsize = (ft_str_len(dest));
	srcsize = (ft_str_len(src));
	i = destsize;
	if (size <= destsize)
		return (size + srcsize);
	j = 0;
	while (src[j] != '\0' && j < size - destsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destsize + srcsize);
}

/*
#include <stdio.h>

int main()
{
	char	str1[] = "World";
	char	str2[50] = "Hello, ";

	ft_strlcat(str2, str1, 123);
	printf("%s \n", str2);	
}
*/
