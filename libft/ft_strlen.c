/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 13:47:11 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/06 12:46:37 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t cnt;

	cnt = 0;
	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}
