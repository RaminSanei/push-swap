/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:27:46 by ssanei            #+#    #+#             */
/*   Updated: 2024/05/31 15:39:58 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **from_stack, t_list **to_stack, char *msg)
{
	t_list	*node;

	if (!from_stack || !*from_stack)
		return ;
	node = *from_stack;
	*from_stack = (*from_stack)->next;
	ft_listadd_front(to_stack, node);
	if (msg)
		ft_putendl_fd(msg, STDOUT_FILENO);
}