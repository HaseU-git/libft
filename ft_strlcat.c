/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 01:37:30 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/28 01:42:12 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dst_len;

	if (size == 0)
		return (ft_strlen(src));
	else if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	else
	{
		dst_len = ft_strlen(dest);
		i = 0;
		while (i < size - dst_len - 1 && src[i])
		{
			dest[dst_len + i] = src[i];
			i++;
		}
		dest[dst_len + i] = '\0';
		return (dst_len + ft_strlen(src));
	}
}
