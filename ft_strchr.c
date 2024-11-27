/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:42:35 by cnoba             #+#    #+#             */
/*   Updated: 2024/10/25 10:42:37 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	chr;

	ptr = (char *)s;
	chr = (char)c;
	while (*ptr != chr)
	{
		if (*ptr == 0)
			return (NULL);
		ptr++;
	}
	return (ptr);
}
