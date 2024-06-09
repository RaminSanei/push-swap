/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weights_initialization.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:32:05 by marvin            #+#    #+#             */
/*   Updated: 2024/06/09 18:32:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	get_index(int n, int *nums, int size)
{
	int	i;

	i = 0;
	while (size--)
	{
		if (nums[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

int	*ft_bubblesort(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if (j + 1 < size && arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

void	init_stack_indexes(t_list **stackA)
{
	t_list	*node;
	t_list	*head;
	int		n;
	int		i;
	int		*nums;

	n = ft_listsize(*stackA);
	nums = malloc(n * sizeof(int));
	i = 0;
	node = *stackA;
	head = node;
	while (n--)
	{
		nums[i++] = node->data;
		node = node->next;
	}
	nums = ft_bubblesort(nums, i);
	while (head)
	{
		head->index = get_index(head->data, nums, i);
		head = head->next;
	}
}
