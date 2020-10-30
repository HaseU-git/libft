/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:04:01 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/10/30 12:13:13 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	if(!(ret = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	ret->content = content;
	ret->next = NULL;
	return (ret);
}
