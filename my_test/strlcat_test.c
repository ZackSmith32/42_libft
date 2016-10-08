/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/27 00:16:39 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// when src is larger than dest both functions "zsh: abort"

int		main(void)
{
	char	ft_src_1[6];
	char	ft_dest_1[10];
	char	sys_src_1[6];
	char	sys_dest_1[10];


	printf("\n-------------- test 1 --------------\n");
	printf("**norm n = 7\n\n");

	ft_strcpy(ft_src_1, "xxxxx");
	ft_strcpy(ft_dest_1, "*****");

	strcpy(sys_src_1, "xxxxx");
	strcpy(sys_dest_1, "*****");


	ft_strlcat(ft_dest_1, ft_src_1, 7);
	strlcat(sys_dest_1, sys_src_1, 7);

	printf("src: %s\n", "xxxxx");
	printf("dst: %s\n\n", "****");

	printf("ft : %s\n", ft_dest_1);
	printf("sys: %s\n\n", sys_dest_1);

	printf("\n-------------- test 2 --------------\n");
	printf("**if there is no null char within the size. size = 7\n");
	printf("**O signifies null char\n\n");


	ft_bzero(ft_src_1, 6);
	bzero(sys_src_1, 6);
	ft_bzero(ft_dest_1, 10);
	bzero(sys_dest_1, 10);

	ft_strcpy(ft_src_1, "xxxxx");
	ft_strcpy(ft_dest_1, "*********");

	strcpy(sys_src_1, "xxxxx");
	strcpy(sys_dest_1, "*********");

	printf("src: %s\n", "xxxxx");
	printf("dst: %s\n\n", "*********");

	ft_strlcat(ft_dest_1, ft_src_1, 7);
	strlcat(sys_dest_1, sys_src_1, 7);

	printf("ft : ");
	int n = 0;
	while (n < 10)
	{
		if (ft_dest_1[n] == '\0')
			printf("O");
		printf("%c", ft_dest_1[n]);
		n++;
	}
	printf("\nsys: ");

	n = 0;
	while (n < 10)
	{
		if (sys_dest_1[n] == '\0')
			printf("O");
		printf("%c", sys_dest_1[n]);
		n++;
	}
	printf("\n\n");

	return (0);
}