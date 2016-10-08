/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 19:07:30 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/26 22:56:26 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// when src is larger than dest both functions "zsh: abort"

int		main(void)
{
	char	ft[6];
	char	sys[6];
	char	ftdest[10];
	char	sysdest[10];
	int		n;

	printf("\n-------------- test 1 --------------\n");
	printf("**word: normal copy\n\n");


	ft_bzero(ft, 6);
	bzero(sys, 6);
	ft_bzero(ftdest, 10);
	bzero(sysdest, 10);

	ft_strcpy(ft, "xxxxx");
	strcpy(sys, "xxxxx");
	ft_strcpy(ftdest, "*********");
	strcpy(sysdest, "*********");

	ft_strncpy(ftdest, ft, 6);
	strncpy(sysdest, sys, 6);

	printf("src: %s\n", "xxxxx");
	printf("dst: %s\n\n", "*********");

	printf("ft : %s\n", ftdest);
	printf("sys: %s\n\n", sysdest);


	printf("\n-------------- test 2 --------------\n");
	printf("**check whole dest string to see if null terminators are fill it out \n\n");
	printf("**O's replace null terminated chars! \n\n");

	printf("ft : ");
	n = 0;
	while (n < 10)
	{
		if (ftdest[n] == '\0')
			printf("O");
		printf("%c", ftdest[n]);
		n++;
	}
	printf("\nsys: ");

	n = 0;
	while (n < 10)
	{
		if (sysdest[n] == '\0')
			printf("O");
		printf("%c", sysdest[n]);
		n++;
	}
	printf("\n");

	

	return (0);
}