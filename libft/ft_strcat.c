/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:55:26 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/06 07:54:12 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *p_s1;

	p_s1 = s1;
	while (*p_s1)
		p_s1++;
	while (*s2)
	{
		*p_s1++ = *s2++;
	}
	*p_s1 = '\0';
	return (s1);
}
