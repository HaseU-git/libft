/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 22:21:45 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/29 14:45:48 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *s;
	unsigned char *d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d)
	{
		s += len;
		d += len;
		while (0 < len)
		{
			*--d = *--s;
			len--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (d);
}


char *str = "abcdefg"
s : &str[0] "abcdefg"
d : &str[4] "cdefg"





