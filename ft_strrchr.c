/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:50:50 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 18:16:35 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;
	int	point;

	i = 0;
	point = 10000;
	if (c == '\0')
	{
		while (string[i])
			i++;
		return ((char *)&string[i]);
	}
	while (string[i])
	{
		if (string[i] == c)
			point = i;
		i++;
	}
	if (point != 10000)
		return ((char *)&string[point]);
	return (0);
}
