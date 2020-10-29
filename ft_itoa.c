/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 20:33:45 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/28 22:25:43 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	power(int num)
{
	int count;
	int ret;

	count = 0;
	ret = 1;
	while (count < num)
	{
		ret *= 10;
		count++;
	}
	return (ret);
}

static int	count_digit(unsigned int num)
{
	unsigned int	temp;
	int				digit;

	digit = 0;
	temp = num;
	while (temp != 0)
	{
		digit++;
		temp = temp / 10;
	}
	return (digit);
}

static char	*converter(int is_negative, unsigned int temp, char *ret, int digit)
{
	int	i;

	i = 0;
	if (is_negative == 1)
	{
		ret[i] = '-';
		i++;
	}
	while (digit != 0)
	{
		digit--;
		ret[i] = (temp / power(digit)) + '0';
		temp = temp - (temp / power(digit)) * power(digit);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char		*ft_itoa(int n)
{
	unsigned int	temp;
	int				is_negative;
	int				digit;
	char			*ret;

	is_negative = 0;
	digit = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		is_negative++;
		temp = (unsigned int)-n;
	}
	else
		temp = (unsigned int)n;
	digit = count_digit(temp);
	if (!(ret = (char *)malloc(sizeof(char) * (digit + is_negative + 1))))
		return (NULL);
	ret = converter(is_negative, temp, ret, digit);
	return (ret);
}
