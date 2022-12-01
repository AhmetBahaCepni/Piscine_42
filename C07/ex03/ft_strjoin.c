/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aekinci <aekinci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:16:26 by aekinci           #+#    #+#             */
/*   Updated: 2022/08/07 14:02:03 by aekinci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_length(char **strs, int size, char *sep)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (i < size)
	{
		count += (ft_strlen(strs[i]));
		if (size - 1 != i)
			count += (ft_strlen(sep));
		i++;
	}
	return (count + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	int		i;
	int		j;
	int		k;
	char	*arr;

	arr = (char *) malloc(total_length(strs, size, sep));
	i = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			arr[++k] = strs[i][j];
		j = -1;
		while (sep[++j] != '\0' && i != (size - 1))
			arr[++k] = sep[j];
	}
	arr[k + 1] = '\0';
	return (arr);
}
