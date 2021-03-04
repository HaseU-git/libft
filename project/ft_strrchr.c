/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:42:24 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/30 02:30:03 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	size_t	size;

	temp = (char *)s;
	size = ft_strlen(s);
	temp += size;
	c = (char)c;
	while (0 < size--)
	{
		if (*temp == c)
			return (temp);
		temp--;
	}
	if (*temp == c)
		return (temp);
	return (NULL);
}
