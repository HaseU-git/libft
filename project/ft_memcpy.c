/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 19:23:18 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/30 00:13:10 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	if (!dst && !src)
		return (NULL);
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	while (0 < n)
	{
		*str2 = *str1;
		str1++;
		str2++;
		n--;
	}
	return (dst);
}
