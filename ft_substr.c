/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:38:56 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 20:10:32 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		num;
	char		*arr;

	num = 0;
	arr = (char *)malloc(len * (sizeof(char)) + 1);
	if (arr == 0)
		return (0);
	while (num < len && s[start + num] != 0)
	{
		arr[num] = s[start + num];
		num++;
	}
	arr[num] = '\0';
	return (arr);
}
