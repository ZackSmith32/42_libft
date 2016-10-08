/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/26 23:36:12 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// when src is larger than dest both functions "zsh: abort"

int		main(void)
{
	char	ft_src[6];
	char	ft_dest[10];
	char	sys_src[6];
	char	sys_dest[10];


	printf("\n-------------- test 1 --------------\n");
	printf("**word: normal cat n = 4\n\n");


	ft_bzero(ft_src, 6);
	ft_bzero(ft_dest, 10);

	ft_strcpy(ft_src, "xxxxx");
	ft_strcpy(ft_dest, "****");

	strcpy(sys_src, "xxxxx");
	strcpy(sys_dest, "****");


	ft_strncat(ft_dest, ft_src, 4);
	strncat(sys_dest, sys_src, 4);

	printf("src: %s\n", "xxxxx");
	printf("dst: %s\n\n", "****");

	printf("ft : %s\n", ft_dest);
	printf("sys: %s\n\n", sys_dest);

	return (0);
}