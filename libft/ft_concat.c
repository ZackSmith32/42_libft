/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 13:59:15 by zsmith            #+#    #+#             */
/*   Updated: 2017/05/10 21:40:28 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

/*
**	no allocation, full size of str must be provided
*/

int	ft_concat(char *ret_str, int argc, ...)
{
	va_list		strs;
	char		*temp;
	int			i;
	int			j;

	i = 0;
	va_start(strs, argc);
	temp = ret_str;
	while (argc > 0)
	{
		j = 0;
		temp = va_arg(strs, char *);
		while (temp[j] != '\0')
		{
			ret_str[i] = temp[j];
			i++;
			j++;
		}
		argc--;
	}
	ret_str[i] = '\0';
	return (j);
}
