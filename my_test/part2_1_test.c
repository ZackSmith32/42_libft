/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/10/01 14:33:37 by zsmith           ###   ########.fr       */
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
	void	**dbl;
	char	*ptr;
	int		i;
	char	c;

	i = 0;
	c = 'c';
	// ptr = ft_memalloc(sizeof(char));
	// // *ptr = c; 	// the line above allocates a spot in memory that ptr points at
	// 				// line 30 copies c to the space allocate on line 29
	// 				// makes sense if you read it from left to right
	// ptr[0] = c;
	// dbl = ft_memalloc(sizeof(char *));
	// dbl[0] = ptr;	

	ptr = ft_memalloc(100);
	dbl = (void**)&ptr;	

	printf("--------- ft_memdel 1 ----------\n\n");
	printf("before:\n");
	printf("dbl location: %p, address: %p\n", &dbl, dbl);
	printf("ptr location: %p, address: %p\n", &ptr, ptr);
	printf("c   location: %p, value: %c\n", &c, c);
	ft_memdel(dbl);
	printf("\nafter:\n");
	printf("dbl location: %p, address: %p\n", &dbl, dbl);
	printf("ptr location: %p, address: %p\n", &ptr, ptr);
	printf("c   location: %p, value: %c\n", &c, c);
	dbl = NULL;
	c = 0;
	printf("\nclear:\n");
	printf("dbl location: %p, address: %p\n", &dbl, dbl);
	printf("ptr location: %p, address: %p\n", &ptr, ptr);
	printf("c   location: %p, value: %c\n", &c, c);

	printf("--------- ft_strnew 1 ----------\n\n");
	// this test shows that the strnew wrote exactly 10 '\0' to the new string
	// I show this by first making a string with all 1's ('o' = 111)
	// freeing that string and using ft_strnew to make a new string on the 
	// same plot of memory.  hence the 10 0's followed by 1's
	ptr = ft_strnew(15);
	i = 0;
	while (i < 15)
	{
		ptr[i] = 'o';
		i++;
	}
	free(ptr);
	ptr = ft_strnew(10);
	printf("string: ");
	i =0;
	while (i < 15)
	{
		printf("%d", ptr[i]);
		i++;
	}

	printf("\n\n--------- ft_strdel 1 ----------\n\n");

	bzero(ptr, 100);
	free(ptr);
	char	**str_dbl;

	str_dbl = &ptr;
	ptr = (char *)malloc((sizeof(char) * 5));
	strcpy(ptr, "zack");

	printf("before:\n");
	printf("str_dbl location: %p, address: %p\n", &str_dbl, str_dbl);
	printf("ptr     location: %p, address: %p\n", &ptr, ptr);
	printf("*ptr    location: %p, value: %c\n", ptr, *ptr);
	ft_strdel(str_dbl);
	printf("\nafter:\n");
	printf("str_dbl location: %p, address: %p\n", &str_dbl, str_dbl);
	printf("ptr     location: %p, address: %p\n", &ptr, ptr);

	str_dbl = NULL;
	printf("\nclear:\n");
	printf("str_dbl location: %p, address: %p\n", &str_dbl, str_dbl);
	printf("ptr     location: %p, address: %p\n", &ptr, ptr);

	printf("\n\n--------- ft_strclr 1 ----------\n\n");

	ptr = (char *)malloc((sizeof(char) * 5));
	ptr = ft_strcpy(ptr, "xxxx");
	printf("ptr: %s\n\n", ptr);
	printf("ft_strclr(ptr);\n\n");
	ft_strclr(ptr);
	printf("ptr: %s\n\n", ptr);


	printf("\n\n--------- ft_striter 1 ----------\n\n");

	ft_strclr(ptr);
	free(ptr);
	printf("before:\n");
	ptr = (char *)malloc(sizeof(char) * 5);
	ft_strcpy(ptr, "bbyy");
	printf("ptr: %s\n\n", ptr);
	ft_striter(ptr, &add_one);
	printf("after +1 to all chars:\n");
	printf("ptr: %s\n\n", ptr);

	printf("\n\n--------- ft_striiter 1 ----------\n\n");

	ft_strclr(ptr);
	free(ptr);
	printf("before:\n");
	ptr = (char *)malloc(sizeof(char) * 5);
	ft_strcpy(ptr, "bbyy");
	printf("ptr: %s\n\n", ptr);
	ft_striteri(ptr, &add_one_i);
	printf("after +1 to all chars:\n");
	printf("ptr: %s\n\n", ptr);


	printf("\n\n--------- ft_strmap 1 ----------\n\n");

	ft_strclr(ptr);
	free(ptr);

	char	*str_res;
	char	*ptr2;
	
	printf("before:\n");
	
	ptr2 = ft_strdup("toto");
	printf("ptr2: %s\n\n", ptr2);

	// why do I need to allocate memory to str_res, if I allocate mem in str_map
	// do I need to free the memory allocated in strmap?
	printf("ptr2    : %p : %p\n", &ptr2, ptr2);
	printf("str_res : %p :\n", &str_res);

	//str_res = (char*)malloc(15);

	//printf("after malloc\n");
	str_res = ft_strmap(ptr2, &add_one_str);
	

	printf("after +1 to all chars:\n");
	printf("ptr: %s\n\n", str_res);
	
	ft_strclr(str_res);
	free(str_res);
	free(ptr2);

	printf("\n\n--------- ft_strmapi 1 ----------\n\n");

	const char	*cptr;
	
	printf("before:\n");
	cptr = (const char *)malloc(sizeof(const char) * 5);
	ft_strcpy((char *)cptr, "mmLL");
	printf("ptr: %s\n\n", cptr);
	str_res = ft_strmapi(ptr, &add_one_str_i);
	printf("after +1 to all chars:\n");
	printf("ptr: %s\n\n", str_res);
	

	ft_strclr(str_res);
	free(str_res);

	printf("\n\n--------- ft_strequ 1 ----------\n\n");

	printf("compare abcd to abcc: %d", ft_strequ("abcd", "abcc"));



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














