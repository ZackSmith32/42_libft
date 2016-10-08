/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:35:42 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/24 12:48:54 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
int		main(void)
{
	void	*tstr;
	void	*zstr;
	void	*src;
	unsigned char	*ftpt;
	unsigned char	*regpt;
	size_t	n;
	int		c;

	n = 10;
	c = 111;
	tstr = (void*)malloc(sizeof(unsigned char)*10);
	zstr = (void*)malloc(sizeof(unsigned char)*10);
	src = (void*)malloc(sizeof(unsigned char)*10);

	// use str cpy, cause it individually adds each character to the string
	strcpy(tstr, "the weekend");
	strcpy(zstr, "the weekend");
	strcpy(src, "monday");

	// this tests if the copy works
	ft_memccpy(tstr, src, c,n);
	printf("ft : %s\n", tstr);

	// this tests if the function returns a pointer to the char
	// right after the matched character in the dest
	ftpt = ft_memccpy(tstr, src, c, n);
	printf("ftpt : %c\n", *ftpt);
	ftpt--;
	printf("ftpt : %c\n", *ftpt);
	ftpt--;
	printf("ftpt : %c\n", *ftpt);

	// this is the actual function for comparison purposes
	memccpy(zstr, src, c, n);
	printf("reg: %s\n", zstr);
	regpt = (unsigned char*)memccpy(zstr, src, c, n);
	printf("regpt: %c\n", *regpt);
	regpt--;
	printf("regpt: %c\n", *regpt);
	regpt--;
	printf("regpt: %c\n", *regpt);

	return (0);
}