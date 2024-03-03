/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:10:38 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 18:52:42 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					i;
	int					num;
	unsigned char		*target;
	unsigned char		*source;

	num = n;
	target = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (dest < src)
	{
		i = 0;
		while (i < num)
		{
			target[i] = source[i];
			i++;
		}
	}
	else
	{
		i = num + 1;
		while (--i)
			target[i - 1] = source[i - 1];
	}
	return (target);
}
