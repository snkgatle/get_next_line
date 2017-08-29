/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:27:43 by skgatle           #+#    #+#             */
/*   Updated: 2017/08/16 18:07:07 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nw_lnk;

	while (lst)
	{
		nw_lnk = f(lst);
		nw_lnk->next = ft_lstmap(lst->next, f);
		return (nw_lnk);
	}
	return (NULL);
}
