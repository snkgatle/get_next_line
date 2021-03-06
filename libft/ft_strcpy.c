/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:16:26 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/06 10:41:19 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *p_dst;

	p_dst = dst;
	while (*src)
	{
		*p_dst++ = *src++;
	}
	*p_dst = *src;
	return (dst);
}
