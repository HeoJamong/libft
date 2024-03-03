/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:43:19 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 20:28:25 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *string)
{
	int	minus;
	int	i;
	int	c;

	minus = 1;
	i = 0;
	c = 0;
	while ((9 <= string[i] && string[i] <= 13) || string[i] == 32)
		i++;
	if (string[i] == '-' || string[i] == '+')
	{
		if (string[i] == '-')
			minus *= -1;
		i++;
	}
	while ('0' <= string[i] && string[i] <= '9')
	{
		c *= 10;
		c = c + (string[i] - '0');
		i++;
	}
	return (minus * c);
}
