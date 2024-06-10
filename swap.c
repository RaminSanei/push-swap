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

void swap_nodes(t_list **stack) {
    if (ft_listsize(*stack) < 2)
        return;
    t_list *temp;

    temp = *stack;
    *stack = (*stack)->next;
    temp->next = (*stack)->next;
    (*stack)->next = temp;
}

void	swap(t_list **stackA, t_list **stackB, char *msg)
{
	if (stackA)
        swap_nodes(stackA);
    if (stackB)
        swap_nodes(stackB);
	if (msg)
		ft_putendl_fd(msg, STDOUT_FILENO);
}