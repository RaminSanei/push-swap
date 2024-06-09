/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:30:36 by ssanei            #+#    #+#             */
/*   Updated: 2024/06/09 18:53:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->data > head->next->data)
			return (0);
		head = head->next;
	}
	return (1);
}

void	ft_free_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}

void stacks_allocation(t_list **stackA, t_list **stackB, int argc, char *argv[]) {
    *stackA = (t_list *)malloc(sizeof(t_list));
    *stackB = (t_list *)malloc(sizeof(t_list));
    initial_Stack(stackA, argc, argv);
		// init_stack_indexes(stackA);

}

int	main(int argc, char *argv[])
{
	t_list *stackA;
	t_list *stackB;

	stackA = NULL;
	stackB = NULL;

	if (argc < 2)
		return (-1);
	ft_check_arguments(argc, argv);
	stacks_allocation(&stackA, &stackB, argc, argv);
	if (ft_is_sorted(&stackA))
	{
		ft_free_stack(&stackA);
		ft_free_stack(&stackB);
		return (0);
	}
	
	return (0);
}