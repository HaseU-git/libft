/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 19:52:08 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/28 17:36:37 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *temps;
	unsigned char *tempd;

	temps = (unsigned char *)src;
	tempd = (unsigned char *)dst;
	while (0 < n)
	{
		*tempd = *temps;
		if (*temps == (unsigned char)c)
			return (tempd + 1);
		temps++;
		tempd++;
		n--;
	}
	return (NULL);
}
