/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:15:20 by ssanei            #+#    #+#             */
/*   Updated: 2024/03/17 12:53:02 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t	i;
	char	*dstc;
	char	*srcc;

	if (destination == NULL && source == NULL)
		return (NULL);
	i = 0;
	dstc = (char *)destination;
	srcc = (char *)source;
	while (i < num)
	{
		dstc[i] = srcc[i];
		i++;
	}
	return (destination);
}
