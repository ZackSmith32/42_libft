/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:20:48 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/25 12:03:26 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_bzero(void *s, size_t n);

int		main(void)
{
	void	*ft_1;
	void	*ft_2;
	size_t	n;

	n = 10;
	ft_1 = (void*)malloc(sizeof(unsigned char) * 10);
	ft_2 = (void*)malloc(sizeof(unsigned char) * 10);
	strcpy(ft_1, "play dough");
	strcpy(ft_2, "play rough");

	printf("---------test 1--------\n");
	printf("* return the numeric difference of first diff letter in 2 strings\n\n");
	printf("lh: %s\n", ft_1);
	printf("rh: %s\n\n", ft_2);

	printf("ft : %d\n", ft_memcmp(ft_1, ft_2, n));
	printf("sys: %d\n\n", ft_memcmp(ft_1, ft_2, n));

	printf("---------test 2--------\n");
	printf("* 0 length string returns 0\n\n");
	ft_bzero(ft_1, 10);
	ft_bzero(ft_2, 10);
	strcpy(ft_1, "");
	strcpy(ft_2, "");

	printf("ft : %d\n", ft_memcmp(ft_1, ft_2, n));
	printf("sys: %d\n\n", ft_memcmp(ft_1, ft_2, n));

	printf("---------test 3--------\n");
	printf("* identical\n\n");
	ft_bzero(ft_1, 10);
	ft_bzero(ft_2, 10);

	strcpy(ft_1, "identical");
	strcpy(ft_2, "identical");

	printf("ft : %d\n", ft_memcmp(ft_1, ft_2, n));
	printf("sys: %d\n\n", ft_memcmp(ft_1, ft_2, n));

	return (0);
}