/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:15:55 by ssanei            #+#    #+#             */
/*   Updated: 2024/03/17 15:17:59 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (*(unsigned char *)(ptr1 + i) != *(unsigned char *)(ptr2 + i))
			return (*(unsigned char *)(ptr1 + i) - *(unsigned char *)(ptr2
					+ i));
		i++;
	}
	return (0);
}
