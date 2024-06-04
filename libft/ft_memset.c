/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:13:53 by ssanei            #+#    #+#             */
/*   Updated: 2024/03/17 15:50:49 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*p;

	p = (char *)ptr;
	while (num > 0)
	{
		p[num - 1] = value;
		num--;
	}
	return (ptr);
}
