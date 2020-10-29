/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 12:47:23 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/28 01:43:01 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*temp_str;
	size_t	num;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && 0 < len)
	{
		temp_str = (char *)haystack;
		num = 0;
		while (*temp_str == needle[num] && num < len)
		{
			temp_str++;
			num++;
			if (needle[num] == '\0')
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
