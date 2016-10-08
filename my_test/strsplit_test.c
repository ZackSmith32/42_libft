/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/10/03 17:28:05 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	**tt;

	tt = ft_strsplit("***salut****!**", '*');
	ft_print_dub_ptr(tt);
	if(strcmp(tt[0], "salut") == 0)
		printf("1a - good\n");
	if(strcmp(tt[1], "!") == 0)
		printf("1b - good\n");
	bzero(*tt, 20);
	free(*tt);
	free(tt);
	tt = NULL;

	tt = ft_strsplit("*****", '*');
	ft_print_dub_ptr(tt);
	printf("printf: %s\n", tt[0]);
	if(tt[0] == NULL)
		printf("2 - good\n");
	else
		printf("2 - bad\n");

	// bzero(*tt, 20);

	// tt = ft_strsplit("coucou", '*');
	// if(strcmp(tt[0], "coucou") == 0)
	// 	printf("3 - good");
	// bzero(*tt, 20);

	// tt = ft_strsplit("salut****", '*');
	// if(strcmp(tt[0], "salut") == 0)
	// 	printf("4 - good");
	// bzero(*tt, 20);

	// tt = ft_strsplit("****salut", '*');
	// if(strcmp(tt[0], "salut") == 0)
	// 	printf("5 - good");
	// bzero(*tt, 20);

	// tt = ft_strsplit("", '*');
	// if(tt &&  tt[0] == NULL)
	// 	printf("6 - good");
	// bzero(*tt, 20);






	return (0);
}