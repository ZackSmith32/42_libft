/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:20:48 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/25 22:44:43 by zsmith           ###   ########.fr       */
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
	char	*ret;
	char	*ret2;


	str = (char*)malloc(5);
	str2 = (char*)malloc(5);
	str = "spine";
	str2 = "spine";

	ret = (char*)malloc(5);
	ret2 = (char*)malloc(5);

	printf("\n-------------- test 1 --------------\n");
	printf("**word: spine\n\n");

	ret = ft_strdup(str);
	ret2 = strdup(str2);
	printf("ft : %s\n", ret);		
	printf("sys: %s\n\n", ret2);

	printf("\n-------------- test 2 --------------\n");
	printf("** change src to ensure it's a different string\n");
	printf("** should print out the same string\n\n");

	str = "worst";
	str2 = "worst";
	printf("ft : %s\n", ret);
	printf("sys: %s\n\n", ret2);
	
	return (0);
}