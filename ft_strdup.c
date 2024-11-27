/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:55:05 by cnoba             #+#    #+#             */
/*   Updated: 2024/10/25 16:00:37 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	i = ft_strlen(s1);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	ft_memcpy(str, s1, i);
	return (str);
}
