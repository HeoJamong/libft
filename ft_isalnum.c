/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:05:36 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 18:03:53 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') \
	|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include<stdio.h>

void	main()
{
	printf("%d",ft_isalnum('a'));
	printf("%d",ft_isalnum('1'));
	printf("%d",ft_isalnum('%'));
}*/
