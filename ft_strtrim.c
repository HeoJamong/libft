/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:32:46 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 20:21:07 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (start < end && ft_strchr(set, s1[end]))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (str == 0)
		return (0);
	str = ft_memcpy(str, &s1[start], end - start + 1);
	str[end + 1] = '\0';
	return (str);
}
