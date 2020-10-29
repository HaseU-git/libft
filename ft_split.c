/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 00:37:21 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/28 22:21:47 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	all_free(char **ret, int j)
{
	while (j-- > 0)
	{
		free(ret[j]);
		ret[j] = NULL;
	}
	free(ret);
	ret = NULL;
}

static int	count_array_len(char const *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			num++;
			while (s[i] != c && s[i])
				i++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (num);
}

static int	count_elements_len(char const *s, char c, int i)
{
	int	num;

	num = 0;
	while (s[i] != c && s[i])
	{
		num++;
		i++;
	}
	return (num);
}

static void	fill_ret(char const *s, char c, char **ret)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < count_array_len(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			if (!(ret[j] = (char *)malloc(sizeof(char)
			* (count_elements_len(s, c, i) + 1))))
			{
				all_free(ret, j);
				return ;
			}
			ft_strlcpy(ret[j], &s[i], count_elements_len(s, c, i) + 1);
			i += count_elements_len(s, c, i);
			j++;
		}
	}
	ret[count_array_len(s, c)] = NULL;
}

char		**ft_split(char const *s, char c)
{
	char	**ret;

	if (!s)
		return (NULL);
	if (!(ret = (char **)malloc(sizeof(char *) * count_array_len(s, c) + 1)))
		return (NULL);
	fill_ret(s, c, ret);
	return (ret);
}
