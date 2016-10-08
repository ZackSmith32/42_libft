/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:35:42 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/24 12:05:29 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

int		main(void)
{
	void	*tstr;
	void	*zstr;
	void	*src;
	size_t	n;

	n = 5;
	tstr = (void*)malloc(sizeof(unsigned char)*10);
	zstr = (void*)malloc(sizeof(unsigned char)*10);
	src = (void*)malloc(sizeof(unsigned char)*10);

	// use str cpy, cause it individually adds each character to the string
	strcpy(tstr, "the weekend");
	strcpy(zstr, "the weekend");
	strcpy(src, "monday");

	ft_memcpy(tstr, src, n);
	printf("ft : %s\n", tstr);
	memcpy(zstr, src, n);
	printf("reg: %s\n", zstr);

	return (0);
}