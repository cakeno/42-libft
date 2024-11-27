/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:43:27 by cnoba             #+#    #+#             */
/*   Updated: 2024/10/29 22:26:54 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start,
size_t len)
{
	size_t	size;
	char	*res;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size || start + len < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
