/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:20:48 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/25 23:06:12 by zsmith           ###   ########.fr       */
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

	char	*dest1a;
	char	*dest1b;
	char	*src1a;
	char	*src1b;

	dest1a = (char*)malloc(6);
	dest1b = (char*)malloc(6);
	src1a = (char*)malloc(6);
	src1b = (char*)malloc(6);

	// dest1a = 
	// dest1b =
	src1a = "blubber";
	src1b = "blubber";

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
	src2a = (char*)malloc(6);
	src2b = (char*)malloc(6);

	// dest2a = 
	// dest2b =
	src2a = "blubberific";
	src2b = "blubberific";
	ft_strcpy(dest2a, src2a);
	strcpy(dest2b, src2b);

	printf("ft : %s\n", dest2a);		
	printf("sys: %s\n\n", dest2b);

	printf("\n-------------- test 3 --------------\n");
	printf("**test the result from test2 to see what happens if you iterate through looking for null terminator\n\n");

	while (*dest2a)
	{
		printf("ft : %c\n", *dest2a);
		dest2a++;
	}

	while (*dest2b)
	{
		printf("sys: %c\n", *dest2b);
		dest2b++;
	}
	
	return (0);
}