/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:50:54 by cnoba             #+#    #+#             */
/*   Updated: 2024/10/25 15:50:56 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (count == 0 || size == 0)
		return (malloc(1));
	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, (count * size));
	return (tmp);
}
