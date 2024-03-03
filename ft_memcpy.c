/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:08:54 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 18:51:26 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*target;
	unsigned char		*source;

	i = 0;
	target = (unsigned char *) dest;
	source = (unsigned char *) src;
	while (i < n)
	{
		target[i] = source[i];
		i++;
	}
	return (target);
}
