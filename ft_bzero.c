/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:04:46 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 18:51:01 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main()
{
	char string[300] = "abcdefagasdgzcxvz\0";

	ft_bzero(string, 10);
	for (int i =0; i< 10 ; i++)
	{
		printf("Buffer contents: %d\n",string[i]);
	}
}*/
