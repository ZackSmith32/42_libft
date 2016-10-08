/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:20:48 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/25 11:28:23 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int		main(void)
{
	int			c;
	void	*s;
	void	*s2;
	size_t		n;

	c = 108;
	n = 8;

	s = (void*)malloc(sizeof(unsigned char) * 8);
	strcpy(s, "steelers");

	s2 = (void*)malloc(sizeof(unsigned char) * 8);
	strcpy(s2, "steelers");

	printf("---------test 1--------\n");
	printf("*find first occurence of a letter and return pointer to it\n\n");
	printf("word: %s\n", s);
	printf("char: %c\n\n", c);

	printf("ft : %s\n", ft_memchr(s, c, n));
	printf("sys: %s\n", memchr(s2, c, n));

	printf("---------test 2--------\n");
	printf("*no match return NULLptr\n\n");
	c = 5;
	printf("ft : %s\n", ft_memchr(s, c, n));
	printf("sys: %s\n", memchr(s2, c, n));

	return (0);
}