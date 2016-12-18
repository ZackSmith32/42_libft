/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_on.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 16:35:03 by zsmith            #+#    #+#             */
/*   Updated: 2016/12/17 17:44:27 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_color color_dict[13] = {
	{"black", "\x1b[30m"},
	{"red", "\x1b[31m"},
	{"green", "\x1b[32m"},
	{"yellow", "\x1b[33m"},
	{"blue", "\x1b[34m"}, 
	{"magenta", "\x1b[35m"}, 
	{"cyan", "\x1b[36m"}, 
	{"white", "\x1b[37m"},
	{"reset", "\x1b[0m"}, 
	{"bold", "\x1b[1m"}, 
	{"dim", "\x1b[2m"}, 
	{"underline", "\x1b[4m"},
	{"blink", "\x1b[5m"}
};

void	ft_color_on(int argc, ...)
{
	int		i;
	int		j;
	char	*param;
	va_list	args;

	va_start(args, argc);
	i = 0;
	while (i < argc)
	{
		j = 0;
		param = va_arg(args, char *);
		while (j < 13)
		{
			if (ft_strcmp(param, color_dict[j].c) == 0)
			{
				write(0, color_dict[j].code, 6);
			}
			j++;
		}
		i++;
	}
	va_end(args);
}
