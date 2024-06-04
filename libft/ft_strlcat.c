/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:59:09 by ssanei            #+#    #+#             */
/*   Updated: 2024/03/17 16:17:46 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	t;
	size_t	len;

	t = ft_strlen(dst);
	if (t < dstsize)
	{
		len = ft_strlcpy(dst + t, src, dstsize - t);
		return (len + t);
	}
	return (ft_strlen(src) + dstsize);
}
