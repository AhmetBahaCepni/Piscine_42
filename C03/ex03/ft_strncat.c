/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <acepni@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#
 *                                                +#+           */
/*   Created: 2022/07/31 07:29:39 by acepni            #+#    #+#             */
/*   Updated: 2022/08/02 14:56:02 by acepni           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src [j];
		j++;
		i++;
	}
	dest[i] = '\0';
	i++;
	return (dest);
}

/*
int	main()
{
	char src[] = "World!";
	char dest[100] = "Hello, ";
	printf("%s", ft_strncat(dest, src, 6));
}
*/
