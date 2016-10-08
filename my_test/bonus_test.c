/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/10/02 23:05:34 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This main includes half or so of the functions in the Bonus
** this is the only test I made for the bonus
*/

void	del_lst(void *lst, size_t s);
t_list	*fchar(t_list *t);

int		main(void)
{
	t_list	*tcheck;

	tcheck = ft_lstnew("Helloooo", sizeof(char) * 9);
	ft_print_list(tcheck);
	free(tcheck);

	tcheck = ft_lstnew("___$$$", sizeof(char) * 7);
	ft_print_list(tcheck);
	ft_lstdelone(&tcheck, &del_lst);
	ft_print_list(tcheck);
	free(tcheck);

	t_list	**src;

	tcheck = ft_lstnew("fuck", 5);
	src = &tcheck;
	ft_lstadd(src, ft_lstnew("this", 5));
	ft_lstadd(src, ft_lstnew("shit", 5));
	ft_lstadd(src, ft_lstnew("foo", 4));
	ft_lstadd(src, ft_lstnew("bar", 4));
	ft_print_list(*src);

	ft_lstmap(*src, &fchar);
	ft_print_list(*src);
	return (0);
}

/*
** Helps with ft_lstdelone
*/
void	del_lst(void *lst, size_t s)
{
	t_list	*item;
	item = lst;
	(*item).content = NULL;
	item -> content_size = 0;
	item ->	next = NULL;
}

/*
** test function to pass when func pointer is needed
*/
t_list	*fchar(t_list *t)
{
	t_list	*lst;
	char	*cont;

	cont = t -> content;
	cont[0] = cont[0] + 1; 
	lst = ft_lstnew(cont, t -> content_size);
	return (lst);
}







