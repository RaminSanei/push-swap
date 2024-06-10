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

void	sort_3(t_list **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->data;
	b = (*stack)->next->data;
	c = (*stack)->next->next->data;
	if (a > b && b < c && a < c)
		 (swap(stack, NULL, "sa"));
	else if ((a > c && c > b) || (c > a && a > b))
		 (rotate(stack, NULL, 0, 'a'));
	else if (b > a && a > c)
		 (rotate(stack, NULL, 1, 'a'));
	swap(stack, NULL, "sa");
	rotate(stack, NULL, (a > b && b > c) || (c > b && b > a), 'a');
}
