/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:03:39 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/23 17:05:04 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // printf

void	*ft_memset(void *s, int c, size_t n);

int		main()
{
	char	sntnce[25];
	char	ft_sntnce[25];
	size_t	len;
	int		c;

	strcpy(sntnce, "I want to see a dinosaur");
	strcpy(ft_sntnce, "I want to see a dinosaur");
	len = 25;
	c = 42;

	printf("\n-------------- test 1 --------------\n");
	printf("string: I want to see a dinosaur\n");
	printf("write : *\n");
	printf("size  : the whole thing\n\n");
	ft_memset(ft_sntnce, c, len);
	printf("ft : %s\n", ft_sntnce);
	memset(sntnce, c, len);
	printf("sys: %s\n", sntnce);

	printf("\n-------------- test 2 --------------\n");
	printf("string: I want to see a dinosaur\n");
	printf("write : *\n");
	printf("size  : partial\n\n");
	len = 10;
	ft_bzero(ft_sntnce, 25);
	ft_bzero(sntnce, 25);
	strcpy(sntnce, "I want to see a dinosaur");
	strcpy(ft_sntnce, "I want to see a dinosaur");
	ft_memset(ft_sntnce, c, len);
	printf("ft : %s\n", ft_sntnce);
	memset(sntnce, c, len);
	printf("sys: %s\n", sntnce);

	printf("\n-------------- test 3 --------------\n");
	printf("string: NULL\n");
	printf("write : *\n");
	printf("size  : partial\n\n");
	len = 10;
	ft_bzero(ft_sntnce, 25);
	ft_bzero(sntnce, 25);
	// strcpy(sntnce, "I want to see a dinosaur");
	// strcpy(ft_sntnce, "I want to see a dinosaur");
	ft_memset(NULL, c, len);
	printf("ft : %s\n", ft_sntnce);
	memset(NULL, c, len);
	printf("sys: %s\n", sntnce);






	return (0);
}