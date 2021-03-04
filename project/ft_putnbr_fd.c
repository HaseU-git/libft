/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:19:24 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/26 01:52:44 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoc(unsigned int temp, int fd)
{
	char	c;

	if (temp == 0)
		return ;
	c = (temp % 10) + '0';
	ft_itoc(temp / 10, fd);
	ft_putchar_fd(c, fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int temp;

	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		temp = (unsigned int)-n;
	}
	else
		temp = (unsigned int)n;
	ft_itoc(temp, fd);
}
