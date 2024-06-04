/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:14:44 by ssanei            #+#    #+#             */
/*   Updated: 2024/03/18 14:13:21 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)str1;
	s = (char *)str2;
	if (str1 == str2)
		return (str1);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (str1);
	}
	while (len--)
		*d++ = *s++;
	return (str1);
}
