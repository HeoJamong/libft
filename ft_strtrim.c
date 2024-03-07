/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:32:46 by jheo              #+#    #+#             */
/*   Updated: 2024/03/07 13:20:38 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*str;

	if (!s1)
		return (0);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1);
	while (*start && ft_strchr(set, *start))
		start++;
	while (start && start < end && ft_strchr(set, *end))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (0);
	ft_strlcpy(str, start, end - start + 2);
	return (str);
}
