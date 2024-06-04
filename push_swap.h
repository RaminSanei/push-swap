/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:42:43 by ssanei            #+#    #+#             */
/*   Updated: 2024/05/31 15:18:54 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
#include <stdlib.h>

# ifndef MIN_LONG
#  define MIN_LONG -2147483648
# endif
# ifndef MAX_LONG
#  define MAX_LONG 2147483647
# endif
typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}					t_list;

void	ft_check_arguments(int argc, char *argv[]);
#endif