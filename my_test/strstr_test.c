/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/27 17:08:27 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
// when src is larger than dest both functions "zsh: abort"

int		main(void)
{
	char	s1[14];
	char	s2[5];
	char	s3[0];
	char	*ft_ans;
	char	*sys_ans;

	printf("\n-------------- test 1 --------------\n");
	printf("**normal search\n\n");

	ft_strcpy(s1, "-----zack----");
	ft_strcpy(s2, "zack");

	ft_ans = ft_strstr(s1, s2);
	sys_ans = strstr(s1, s2);

	printf("s1:%s\n", s1);
	printf("s2:%s\n\n", s2);

	printf("ft :%s\n", ft_ans);
	printf("sys:%s\n\n", sys_ans);

	printf("is the original string changed?\n\n");
	printf("original: %s\n", s1);

	printf("\n-------------- test 2 --------------\n");
	printf("**empty s2\n\n");

	ft_ans = ft_strstr(s1, s3);
	sys_ans = strstr(s1, s3);

	printf("s1 :%s\n", s1);
	printf("s3:%s\n\n", s3);

	printf("ft :%s\n", ft_ans);
	printf("sys:%s\n\n", sys_ans);

	printf("\n-------------- test 3 --------------\n");
	printf("**no match\n\n");

	ft_bzero(s2, 5);
	ft_strcpy(s2, "zac!");

	ft_ans = ft_strstr(s1, s2);
	sys_ans = strstr(s1, s2);

	printf("s1:%s\n", s1);
	printf("s2:%s\n\n", s2);

	printf("ft :%s\n", ft_ans);
	printf("sys:%s\n\n", sys_ans);

	printf("is the original string changed?\n\n");
	printf("original: %s\n\n\n", s1);



	return (0);
}























