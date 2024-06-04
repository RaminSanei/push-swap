/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:55:14 by ssanei            #+#    #+#             */
/*   Updated: 2024/03/17 16:36:43 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	if (!*(s1))
		return (ft_strdup(""));
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[len]) && s1[len])
		len--;
	return (ft_substr(s1, 0, len + 1));
}
