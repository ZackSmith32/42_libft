/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/27 00:35:34 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// when src is larger than dest both functions "zsh: abort"

int		main(void)
{
	char	s[14];
	char	*ans;
	char	*ans2;

	strcpy(s, "space shuttle");
	printf("\n-------------- test 1 --------------\n");
	ans = ft_strchr(s, 116);
	ans2 = strchr(s, 116);

	printf("answer ft : %s\n", ans);
	printf("answer sys: %s\n", ans2);


	printf("\n-------------- test 2 --------------\n");
	printf("**check searching for the null character\n\n");


	bzero(ans, 14);
	bzero(ans2, 14);
	strcpy(s, "space shuttle");
	ans = ft_strchr(s, 0);
	ans2 = strchr(s, 0);

	printf("answer ft : %s\n", ans);
	printf("answer sys: %s\n\n", ans2);


	printf("**looking at chars before the returned pointer to make sure it's pointing to the end of the string\n");

	printf("answer ft : %s\n", ans - 1);
	printf("answer sys: %s\n", ans2 - 1);
	printf("answer ft : %s\n", ans - 2);
	printf("answer sys: %s\n", ans2 - 2);
	printf("answer ft : %s\n", ans - 3);
	printf("answer sys: %s\n", ans2 - 3);
	printf("answer ft : %s\n", ans - 4);
	printf("answer sys: %s\n", ans2 - 4);
	printf("answer ft : %s\n", ans - 5);
	printf("answer sys: %s\n", ans2 - 5);
	printf("answer ft : %s\n", ans - 6);
	printf("answer sys: %s\n", ans2 - 6);
	printf("answer ft : %s\n", ans - 7);
	printf("answer sys: %s\n", ans2 - 7);
	printf("answer ft : %s\n", ans - 8);
	printf("answer sys: %s\n", ans2 - 8);


	return (0);
}