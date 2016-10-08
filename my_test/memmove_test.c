/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:20:48 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/24 22:10:23 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	void	*ft_str;
	void	*ya_str;
	void	*src;
	void	*big_str;
	void	*big_str2;
	unsigned char	*destin;
	unsigned char	*destin2;
	size_t	n;

// -----------Test 1-----------
	printf("-------------- test 1 --------------\n");
	printf("**seperate strings\n\n");

	n = 4;
	ft_str = (void*)malloc(sizeof(unsigned char)*10);
	ya_str = (void*)malloc(sizeof(unsigned char)*10);
	src = (void*)malloc(sizeof(unsigned char)*10);
	
	// use str cpy, cause it individually adds each character to the string
	strcpy(ft_str, "the weekend");
	strcpy(ya_str, "the weekend");
	strcpy(src, "monday");

	ft_memmove(ft_str, src, n);
	printf("ft : %s\n", ft_str);

	memmove(ya_str, src, n);
	printf("sys: %s\n", ya_str);

	printf("\n\n");

// -----------Test 2-----------
	printf("-------------- test 2 --------------\n");
	printf("**dest before src\n\n");

	big_str = (void*)malloc(sizeof(unsigned char)*35);
	big_str2 = (void*)malloc(sizeof(unsigned char)*35);
	strcpy(big_str, "stepping through the looking glass");
	strcpy(big_str2, "stepping through the looking glass");

	printf("src ft: %s\n", big_str + 6);
	printf("dst ft: %s\n\n", big_str);
	n = 10;

	destin = ft_memmove(big_str, big_str + 6, n);
	printf("ft : %s\n", big_str + 6);

	destin2 = memmove(big_str2, big_str2 + 6, n);
	printf("sys: %s\n\n", big_str2 + 6);

	printf("return value ft : %s\n\n", destin);
	printf("return value sys: %s\n\n", destin2);
	printf("memcmp %d\n", memcmp(big_str, big_str2, 35));


// -----------Test 3-----------
	printf("-------------- test 3 --------------\n");
	printf("**src before dest\n\n");

	ft_bzero(big_str, 35);
	ft_bzero(big_str2, 35);
	strcpy(big_str, "stepping through the looking glass");
	strcpy(big_str2, "stepping through the looking glass");

	printf("src ft: %s\n", big_str);
	printf("dst ft: %s\n\n", big_str + 6);

	ft_memmove(big_str + 6, big_str, n);
	printf("ft : %s\n", big_str + 6);


	memmove(big_str2 + 6, big_str2, n);
	printf("sys: %s\n\n", big_str2 + 6);

	printf("memcmp %d\n", memcmp(big_str + 6, big_str2 + 6, 35));
	return (0);
}

























