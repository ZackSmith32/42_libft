/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/10/05 11:03:49 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void	**pop_dbl_ptr(void **dbl, int size1);
void	add_one(char *s);
void	add_one_i(unsigned int i, char *s);
char	add_one_str(char s);
char	add_one_str_i(unsigned int n, char s);

int		main(void)
{
	char	*str;
	char	*str_res;
	
	printf("\n\n--------- ft_strmap 1 ----------\n\n");
	
	printf("before:\n");
	
	str = ft_strdup("toto");
	printf("str: %s\n\n", str);

	str_res = ft_strmap(str, &add_one_str);
	
	printf("after +1 to all chars:\n");
	printf("str: %s\n\n", str_res);
	
	ft_strclr(str);	
	ft_strclr(str_res);
	free(str_res);
	free(str);

	printf("\n\n--------- ft_strmapi 1 ----------\n\n");
	
	printf("before:\n");
	str = ft_strdup("mmLL");
	printf("ptr: %s\n\n", str);
	str_res = ft_strmapi(str, &add_one_str_i);
	printf("after +1 to all chars:\n");
	printf("ptr: %s\n\n", str_res);
	

	ft_strclr(str_res);
	free(str_res);
	ft_strclr(str);
	free(str);

	printf("\n\n--------- ft_strequ 1 ----------\n\n");

	printf("compare abcd to abcc: %d\n", ft_strequ("abcd", "abcc"));
	printf("compare abcd to abcd: %d\n", ft_strequ("abcd", "abcd"));
	printf("compare '' to abcd: %d\n", ft_strequ("", "abcd"));

	printf("\n\n--------- ft_strnequ 1 ----------\n\n");

	printf("compare abcd to abcc: %d\n", ft_strnequ("abcd", "abcc", 3));
	printf("compare abcd to abcc: %d\n", ft_strnequ("abcd", "abcc", 4));
	printf("compare abcd to abcd: %d\n", ft_strnequ("abcd", "abcd", 2));
	printf("compare '' to abcd: %d\n", ft_strnequ("", "abcd", 4));

	printf("\n\n--------- ft_strsub 1 ----------\n\n");

	str_res = ft_strsub("xxxzackxxx", 3, 4);
	printf("ft_strsub('xxxzackxxx', 3, 4) : %s\n", str_res);
	ft_strclr(str_res);
	free(str_res);

	str_res = ft_strsub("xxxzackxxx", 9, 4);
	printf("ft_strsub('xxxzackxxx', 9, 4) : %s\n", str_res);
	ft_strclr(str_res);
	free(str_res);

	str_res = ft_strsub("xxxzack\0xx", 5, 4);
	printf("ft_strsub('xxxzack*nullxxx', 9, 4) : %s\n", str_res);
	ft_strclr(str_res);
	free(str_res);

	str_res = ft_strsub("i just want this part #############", 0, 22);
	printf("ft_strsub('i just want this part #############', 0, 22) : %s", str_res);
	ft_strclr(str_res);
	free(str_res);

	printf("\n\n--------- ft_strjoin 1 ----------\n\n");

	str_res = ft_strjoin("zack ", "smith");
	printf("ft_strjoin('zack ', 'smith') : %s\n", str_res);
	ft_strclr(str_res);
	free(str_res);

	str_res = ft_strjoin("", "smith");
	printf("ft_strjoin('', 'smith') : %s\n", str_res);
	ft_strclr(str_res);
	free(str_res);

	str_res = ft_strjoin("hell\0o", "smith");
	printf("ft_strjoin('hell*null*o', 'smith') : %s\n", str_res);
	ft_strclr(str_res);
	free(str_res);

	printf("\n\n--------- ft_strtrim 1 ----------\n\n");

	str_res = ft_strtrim("zack ");
	printf("ft_strtrim('zack ') : %s|\n", str_res);
	ft_strclr(str_res);
	free(str_res);

	str_res = ft_strtrim("   ");
	printf("made it back to main\n");
	printf("ft_strtrim('   ') : %s\n", str_res);
	ft_strclr(str_res);

	str_res = ft_strtrim(" \t\t\t  gummy beaer \n\n ");
	printf("ft_strtrim(' tabtabtab  gummy beaer nlnl ') : %s\n", str_res);
	if (str_res[5] == '\0')
	{
		printf("string is null terminated\n");
	}	
	ft_strclr(str_res);
	free(str_res);

	str_res = ft_strtrim("steelers");
	printf("ft_strtrim('steelers') : %s\n", str_res);
	if (str_res[8] == '\0')
	{
		printf("string is null terminated\n");
	}	
	ft_strclr(str_res);
	free(str_res);

	str_res = ft_strtrim(" \t\t\ttrailing						 ");
	printf("ft_strtrim(' trailing		 ') : %s\n", str_res);
	if (str_res[5] == '\0')
	{
		printf("string is null terminated\n");
	}	
	char	*check;
	check = str_res + 5;
	check = (char *)malloc(5);
	printf("res  :%p\ncheck: %p", &str_res, &check);
	ft_strclr(str_res);
	free(str_res);
	ft_strclr(check);
	free(check);

	str_res = ft_strtrim("\t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n");
	printf("%s\n", str_res);
	ft_strclr(str_res);
	free(str_res);

	str_res = ft_strtrim("\t  \n\n \t\t  \n\n \t  \n  \n   \n \n \t\t\n");
	printf("should be blank: |%s|\n", str_res);
	ft_strclr(str_res);
	free(str_res);

	printf("\n\n--------- ft_strsplit 1 ----------\n\n");

	const char	*split;
	char	**ans;
	int		i;

	i = 0;
	split = ft_strdup("***what**is*this***shit*******");
	ans = ft_strsplit(split, '*');
	while (ft_strncmp(ans[i],  "\0", 1))
	{
		printf("[%s], ", ans[i]);
		ft_strdel(&ans[i]);
		i++;
	}
	ft_strclr((char *)split);
	free((char *)split);

	printf("\n\n");
	i = 0;
	split = ft_strdup("      split       this for   me  !   ");
	ans = ft_strsplit(split, ' ');
	while (ft_strncmp(ans[i],  "\0", 1))
	{
		printf("[%s], ", ans[i]);
		ft_strdel(&ans[i]);
		i++;
	}
	ft_strclr((char *)split);
	free((char *)split);

	printf("\n\n--------- ft_itoa 1 ----------\n\n");

	int		num;

	num = 167803;
	str = ft_itoa(num);
	printf("num: %d\nstr: %s\n", num, str);
	ft_strclr(str);
	free(str);

	num = -903;
	str = ft_itoa(num);
	printf("num: %d\nstr: %s\n", num, str);
	ft_strclr(str);
	free(str);

	num = 0;
	str = ft_itoa(num);
	printf("num: %d\nstr: %s\n", num, str);
	ft_strclr(str);
	free(str);

	num = -2147483648;
	str = ft_itoa(num);
	printf("num: %d\nstr: %s\n", num, str);
	ft_strclr(str);
	free(str);

	printf("\n\n--------- ft_putnbr 1 ----------\n\n");

	num = 234135;
	ft_putstr("ft : ");
	ft_putnbr(num);
	printf("\nsys: %d\n", num);
	ft_putchar('\0');
	ft_putchar('\n');

	num = -1234;
	ft_putstr("ft : ");
	ft_putnbr(num);
	printf("\nsys: %d\n", num);
	ft_putchar('\0');
	ft_putchar('\n');

	num = 0;
	ft_putstr("ft : ");
	ft_putnbr(num);
	printf("\nsys: %d\n", num);
	ft_putchar('\0');
	ft_putchar('\n');

	num = 999999999;
	ft_putstr("ft : ");
	ft_putnbr(num);
	printf("\nsys: %d\n", num);
	ft_putchar('\0');
	ft_putchar('\n');

	return (0);
}































void	**pop_dbl_ptr(void **dbl, int dbl_size)
{
	int		i;
	char	*text;

	text = "booya";
	i = 0;

	while (i < dbl_size)
	{
		dbl[i] = ft_memalloc(strlen(text));
		dbl[i] = text;
		i++;
	}
	dbl[i] = NULL;
	return (dbl);
}

void	add_one(char *s)
{
	*s = *s + 1;
}
char	add_one_str(char s)
{
	s = s + 1;
	return (s);
}

char	add_one_str_i(unsigned int n, char s)
{
	s = s + 1;
	return (s);
}


void	add_one_i(unsigned int i, char *s)
{
	*s = *s + 1;
	printf("i  : %d\n", i);
}














