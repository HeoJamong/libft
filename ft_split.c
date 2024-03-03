/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:31:19 by jheo              #+#    #+#             */
/*   Updated: 2024/03/03 18:05:30 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**free_arr(char **arr, int i)
{
	while (i - 1 > 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (0);
}

size_t	word_count(char const *s, char c)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 1;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c && s[i])
			cnt++;
		i++;
	}
	return (cnt);
}

size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	cnt;
	size_t	i;
	size_t	arr_len;
	char	**arr;

	i = 0;
	cnt = 0;
	cnt = word_count(s, c);
	arr = (char **)malloc(sizeof(char*) * cnt);
	if (arr == 0)
		return (0);
	while (cnt--)
	{
		while (*(s++) == c);
		arr_len = word_len(s, c);
		arr[i] = (char *)malloc(sizeof(char) * (arr_len + 1));
		if (arr[i] == 0)
			return (free_arr(arr, cnt));
		arr[i] = ft_memcpy(&arr[i], s, arr_len);
		arr[i][arr_len] = '\0';
		s += arr_len;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
