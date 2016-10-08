/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:20:48 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/25 22:29:40 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	char	*str;
	char	*str2;

	str2 = (char*)malloc(5);

	printf("\n-------------- test 1 --------------\n");
	printf("**word: alibaba\n\n");

	str = "alibaba";
	printf("ft : %lu\n", ft_strlen(str));		
	printf("sys: %lu\n\n", strlen(str));

	printf("\n-------------- test 2 --------------\n");
	printf("**word: *null*libaba\n\n");

	str = "\0libaba";
	printf("ft : %lu\n", ft_strlen(str));		
	printf("sys: %lu\n\n", strlen(str));

	printf("\n-------------- test 3 --------------\n");
	printf("**word: al*null*baba\n\n");

	str = "ali\0aba";
	printf("ft : %lu\n", ft_strlen(str));		
	printf("sys: %lu\n\n", strlen(str));

	printf("\n-------------- test 4 --------------\n");
	printf("**word: no end\n\n");

	str2 = "aliba";
	printf("ft : %lu\n", ft_strlen(str2));		
	printf("sys: %lu\n\n", strlen(str2));
	
	return (0);
}