/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/10/03 18:04:20 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
// when src is larger than dest both functions "zsh: abort"

int		main(void)
{
	char	test[10];

	int		ft_ans;
	int		sys_ans;

	printf("\n-------------- test 1 --------------\n");
	printf("**normal search\n\n");


	ft_strcpy(test, "77");
	printf("string: %s\n\n", test);

	ft_ans = ft_atoi(test);
	sys_ans = atoi(test);

	printf("ft : %d\n", ft_ans);
	printf("sys: %d\n\n", sys_ans);

	printf("\n-------------- test 2 --------------\n");

	ft_bzero(test, 10);
	ft_strcpy(test, "---777xxx");

	printf("string: %s\n\n", test);

	ft_ans = ft_atoi(test);
	sys_ans = atoi(test);

	printf("ft : %d\n", ft_ans);
	printf("sys: %d\n\n", sys_ans);

	printf("\n-------------- test 3 --------------\n");

	ft_bzero(test, 10);
	ft_strcpy(test, "e+888xxx");

	printf("string: %s\n\n", test);

	ft_ans = ft_atoi(test);
	sys_ans = atoi(test);

	printf("ft : %d\n", ft_ans);
	printf("sys: %d\n\n", sys_ans);

	printf("\n-------------- test 4 --------------\n");

	ft_bzero(test, 10);
	ft_strcpy(test, "+888xxxx");

	printf("string: %s\n\n", test);

	ft_ans = ft_atoi(test);
	sys_ans = atoi(test);

	printf("ft : %d\n", ft_ans);
	printf("sys: %d\n\n", sys_ans);

	printf("\n-------------- test 5 --------------\n");

	ft_bzero(test, 10);
	ft_strcpy(test, "");

	printf("string: %s\n\n", test);

	ft_ans = ft_atoi(test);
	sys_ans = atoi(test);

	printf("ft : %d\n", ft_ans);
	printf("sys: %d\n\n", sys_ans);

	printf("\n-------------- test 6 --------------\n");

	ft_bzero(test, 10);
	ft_strcpy(test, "asdfa56");

	printf("string: %s\n\n", test);

	ft_ans = ft_atoi(test);
	sys_ans = atoi(test);

	printf("ft : %d\n", ft_ans);
	printf("sys: %d\n\n", sys_ans);

	printf("\n-------------- test 7 --------------\n");

	ft_bzero(test, 10);
	ft_strcpy(test, " 1");

	printf("string: %s\n\n", test);

	ft_ans = ft_atoi(test);
	sys_ans = atoi(test);

	printf("ft : %d\n", ft_ans);
	printf("sys: %d\n\n", sys_ans);
	return (0);
}


// int		main(void)
// {
// 	int		ans;
// 	char	test[6];

// 	strcpy(test, "-15j");
// 	ans = atoi(test);
// 	printf("answer: %d", ans);
// 	return (0);
// }




















