/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/27 18:56:38 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
// when src is larger than dest both functions "zsh: abort"

int		main(void)
{
	char	s1[10];
	char	s2[10];
	int		ft_ans;
	int		sys_ans;

	printf("\n-------------- test 1 --------------\n");
	printf("**normal search\n\n");

	ft_strcpy(s1, "abcdefghi");
	ft_strcpy(s2, "abcdecghi");

	ft_ans = ft_strcmp(s1, s2);
	sys_ans = strcmp(s1, s2);

	printf("s1: %s\n", s1);
	printf("s2: %s\n\n", s2);

	printf("ft : %d\n", ft_ans);
	printf("sys: %d\n\n", sys_ans);

	printf("make sure the original string isn't changed\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n\n", s2);

	return (0);
}























