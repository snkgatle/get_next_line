/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_link.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 08:53:34 by skgatle           #+#    #+#             */
/*   Updated: 2017/07/07 08:58:10 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_del_link(void *content, size_t len)
{
	if (!content)
		return ;
	ft_memdel(&content);
	len = 0;
}
