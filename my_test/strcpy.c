/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:20:48 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/26 17:42:53 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{

	printf("\n-------------- test 1 --------------\n");
	printf("**word: normal copy\n\n");

	char	dest1a[7] = "aaaaaa";
	char	dest1b[7] = "aaaaaa";
	char	src1a[5] = "xxxx";
	char	src1b[5] = "xxxx";

	printf("ft : %s\n", ft_strcpy(dest1a, src1a));		
	printf("sys: %s\n\n", strcpy(dest1b, src1b));

	printf("\n-------------- test 2 --------------\n");
	printf("**dest too small\n\n");

	char	*dest2a;
	char	*dest2b;
	char	*src2a;
	char	*src2b;

	dest2a = (char*)malloc(6);
	dest2b = (char*)malloc(6);
	src2a = (char*)malloc(12);
	src2b = (char*)malloc(12);

	src2a = "blubberific";
	src2b = "blubberific";
	ft_strcpy(dest2a, src2a);
	strcpy(dest2b, src2b);

	printf("ft : %s\n", dest2a);		
	printf("sys: %s\n\n", dest2b);

	printf("\n-------------- test 3 --------------\n");
	printf("**src does not have null terminating character\n\n");

	char	dest3a[7] = "aaaaaa";
	char	dest3b[7] = "aaaaaa";
	char	src3a[5] = "xxxxx";
	char	src3b[5] = "xxxxx";

	printf("ft : %s\n", ft_strcpy(dest3a, src3a));		
	printf("sys: %s\n\n", strcpy(dest3b, src3b));

	return (0);
}