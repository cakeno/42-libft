/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:04:43 by cnoba             #+#    #+#             */
/*   Updated: 2024/10/22 19:08:29 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*s2)
		return ((char *) s1);
	while (i < n && s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j]
			&& s2 [j]
			&& i + j < n)
		{
			j++;
			if (!s2[j])
				return ((char *) s1 + i);
		}
		i++;
	}
	return (0);
}
