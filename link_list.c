/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:30:36 by ssanei            #+#    #+#             */
/*   Updated: 2024/05/31 15:40:29 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_listsize(t_list *head)
{
	size_t	i;
	t_list	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_listshift_left(t_list **lst)
{
	t_list	*node;

	if (!lst || !(*lst) || !((*lst)->next))
		return ;
	node = *lst;
	while (node->next)
		node = node->next;
	node->next = *lst;
	*lst = (*lst)->next;
	node->next->next = NULL;
}

void	ft_listshift_right(t_list **lst)
{
	t_list	*node;

	if (!lst || !(*lst) || !((*lst)->next))
		return ;
	node = *lst;
	while (node->next)
		node = node->next;
	node->next = *lst;
	*lst = node;
	node = *lst;
	while (node->next != *lst)
		node = node->next;
	node->next = NULL;
}

void	ft_listadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	ft_listadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	back = *lst;
	while (back->next != NULL)
	{
		back = back->next;
	}
	back->next = new;
}