/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:17:36 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 20:30:45 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*arr;
	int		num;

	num = 0;
	while (string[num])
		num++;
	arr = (char *)malloc(num * sizeof(char) + 1);
	if (arr == 0)
		return (0);
	num = 0;
	while (string[num])
	{
		arr[num] = string[num];
		num++;
	}
	arr[num] = '\0';
	return (arr);
}
