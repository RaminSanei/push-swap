/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:27:46 by ssanei            #+#    #+#             */
/*   Updated: 2024/06/10 17:23:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"
#include <stdlib.h>

#ifndef MIN_LONG
#define MIN_LONG -2147483648
#endif
#ifndef MAX_LONG
#define MAX_LONG 2147483647
#endif
typedef struct s_list
{
	int data;
	int index;
	struct s_list *next;
} t_list;

void ft_check_arguments(int argc, char *argv[]);
int  ft_listsize(t_list *head);
void ft_listshift_left(t_list **lst);
void ft_listshift_right(t_list **lst);
void ft_listadd_front(t_list **lst, t_list *new);
void ft_listadd_back(t_list **lst, t_list *new);
int  rotate_counter(t_list *s, int weight);
void	ft_error(char *msg);
void	ft_memory_free(char *str[]);
void	ft_free_stack(t_list **stack);
int	nearest_sq(int n);



#endif