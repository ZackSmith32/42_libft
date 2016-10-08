/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/27 19:07:08 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
// when src is larger than dest both functions "zsh: abort"

int		main(void)
{
	int		i;
	int		check;

	check = 0;
	i = 0;
	printf("\n-------------- test 1 --------------\n");
	printf("**tolower\n\n");

	printf("original: %c\n", 97);
	printf("ft :%c\n", ft_tolower(97));
	printf("sys:%c\n\n", tolower(97));
	
	printf("original: %c\n", 90);
	printf("ft :%c\n", ft_tolower(90));
	printf("sys:%c\n\n", tolower(90));





	return (0);
}
