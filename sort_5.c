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


void	sort_5(t_list **stackA, t_list **stackB)
{
	int	len;
	int	i;
	int	w;
	int	r;

	len = ft_listsize(*stackA);
	i = 0;
	w = 0;
	while (i < len - 3)
	{
		r = rotate_counter(*stackA, w);
		while ((*stackA)->data != w)
			rotate(stackA, NULL, r > len - r, 'a');
		push(stackA, stackB, "pb");
		w++;
        i++;
	}
	sort_3(stackA);
	while (*stackB)
		push(stackB, stackA, "pa");
}
