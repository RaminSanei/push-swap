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

void	rotate(t_list **stackA, t_list **stackB, int reverse, char stack)
{
	if (reverse)
		ft_listshift_right(stackA);
	else
		ft_listshift_left(stackA);
	if (stackB)
	{
		if (reverse)
			ft_listshift_right(stackB);
		else
			ft_listshift_left(stackB);
	}
	if (stack)
	{
		if (reverse)
			ft_putchar_fd('r', STDOUT_FILENO);
		ft_putchar_fd('r', STDOUT_FILENO);
		ft_putendl_fd(stack, STDOUT_FILENO);
	}
}