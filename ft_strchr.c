/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:04:55 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 18:15:18 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		while (string[i])
			i++;
		return ((char *)&string[i]);
	}
	i = 0;
	while (string[i])
	{
		if (string[i] == c)
			return ((char *)&string[i]);
		i++;
	}
	return (0);
}
