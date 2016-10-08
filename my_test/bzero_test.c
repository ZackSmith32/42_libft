/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:35:42 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/23 16:17:46 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n);

int		main(void)
{
	void	*tstr;
	void	*zstr;
	size_t	n;

	n = 1;
	tstr = (void*)malloc(sizeof(unsigned char)*10);
	zstr = (void*)malloc(sizeof(unsigned char)*10);

	strcpy(tstr, "sugar baby");
	strcpy(zstr, "sugar baby");

	ft_bzero(tstr, n);
	printf("ft : %s\n", tstr);
	bzero(zstr, n);
	printf("reg: %s\n", zstr);
	printf("reg: %s\n", ++zstr);
	printf("reg: %s\n", ++zstr);

	return (0);
}