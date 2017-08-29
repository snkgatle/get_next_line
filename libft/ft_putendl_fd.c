/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 21:18:40 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/08 06:31:55 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char c;

	if (!s)
		return ;
	c = '\n';
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, &c, 1);
}
