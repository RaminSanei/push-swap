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

void	sort_bigger(t_list **stackA, t_list **stackB)
{
	int	i;
	int	len;
	int	threshold;

	len = ft_listsize(*stackA);
	threshold = nearest_sq(len) * 1.6;
	i = 0;
	while (*stackA)
	{
		if ((*stackA)->index <= threshold + i)
		{
			push(stackA, stackB, "pb");
			if ((*stackB)->index <= i++)
				rotate(stackB, NULL, 0, 'b');
		}
		else
			rotate(stackA, NULL, 0, 'a');
	}
	while (len--)
	{
		i = rotate_counter(*stackB, len);
		while ((*stackB)->index != len)
			rotate(stackB, NULL, i > len - i, 'b');
		push(stackB, stackA, "pa");
	}
}