/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:37:08 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/30 02:09:17 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	last;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_substr(s1, 0, 0));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	last = ft_strlen(s1);
	while (last >= start && ft_strchr(set, s1[last]))
		last--;
	ret = ft_substr(s1, start, last - start + 1);
	return (ret);
}
